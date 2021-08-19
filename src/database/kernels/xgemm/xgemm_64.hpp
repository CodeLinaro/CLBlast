
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm64' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmDouble = {
  "Xgemm", Precision::kDouble, {"GEMMK", "KREG", "KWG", "KWI", "MDIMA", "MDIMC", "MWG", "NDIMB", "NDIMC", "NWG", "SA", "SB", "STRM", "STRN", "VWM", "VWN"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 64, 1, 1, 0, 0, 2, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 64, 1, 1, 0, 0, 2, 2 } },
        } },
        { "Fiji", {
          { Name{"AMD Radeon R9 Fury X                              "}, Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
          { Name{"AMD Radeon R9 M370X Compute Engine                "}, Params{ 0, 1, 32, 2, 16, 16, 64, 8, 8, 32, 0, 0, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 8, 8, 32, 8, 8, 32, 0, 0, 0, 0, 4, 4 } },
        } },
        { "Hawaii", {
          { Name{"AMD Radeon R9 290X                                "}, Params{ 0, 1, 16, 8, 32, 8, 128, 8, 8, 32, 0, 1, 0, 0, 1, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 8, 32, 8, 128, 8, 8, 32, 0, 1, 0, 0, 1, 4 } },
        } },
        { "Oland", {
          { Name{"Oland                                             "}, Params{ 0, 1, 16, 2, 8, 16, 64, 16, 8, 16, 0, 0, 1, 1, 1, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 8, 16, 64, 16, 8, 16, 0, 0, 1, 1, 1, 1 } },
        } },
        { "Pitcairn", {
          { Name{"AMD Radeon R9 270X                                "}, Params{ 0, 1, 32, 2, 32, 16, 64, 8, 16, 32, 0, 0, 0, 0, 1, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 32, 16, 64, 8, 16, 32, 0, 0, 0, 0, 1, 2 } },
        } },
        { "Tahiti", {
          { Name{"AMD Radeon HD 7970                                "}, Params{ 0, 1, 32, 2, 16, 8, 16, 8, 8, 32, 0, 0, 0, 1, 1, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 8, 16, 8, 8, 32, 0, 0, 0, 1, 1, 4 } },
        } },
        { "Tonga", {
          { Name{"AMD Radeon R9 380                                 "}, Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
        } },
        { "default", {
          { Name{"AMD Radeon Pro 580 Compute Engine                 "}, Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 64, 1, 1, 0, 0, 2, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 32, 1, 1, 0, 0, 2, 2 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T760                                         "}, Params{ 0, 1, 32, 2, 8, 8, 32, 8, 8, 32, 1, 1, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 8, 8, 32, 8, 8, 32, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz         "}, Params{ 0, 1, 16, 2, 32, 8, 128, 16, 16, 128, 1, 1, 1, 1, 2, 8 } },
          { Name{"Intel(R) Core(TM) i5-4570 CPU @ 3.20GHz           "}, Params{ 0, 1, 32, 2, 16, 8, 128, 16, 8, 128, 1, 0, 1, 1, 1, 8 } },
          { Name{"Intel(R) Core(TM) i5-4590S CPU @ 3.00GHz          "}, Params{ 1, 8, 1, 1, 2, 2, 128, 2, 2, 64, 0, 0, 0, 0, 2, 1 } },
          { Name{"Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz          "}, Params{ 0, 1, 32, 2, 32, 16, 128, 16, 16, 64, 0, 1, 1, 0, 1, 2 } },
          { Name{"Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz   "}, Params{ 0, 1, 32, 2, 32, 16, 128, 16, 16, 128, 0, 0, 1, 0, 1, 2 } },
          { Name{"Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz           "}, Params{ 0, 1, 32, 2, 16, 8, 128, 8, 8, 64, 1, 0, 0, 1, 2, 8 } },
          { Name{"Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz          "}, Params{ 0, 1, 32, 2, 16, 8, 128, 8, 8, 128, 1, 0, 0, 0, 2, 8 } },
          { Name{"Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz          "}, Params{ 0, 1, 32, 2, 8, 16, 128, 16, 8, 128, 0, 0, 1, 1, 1, 8 } },
          { Name{"Intel(R) Core(TM) i7-6770HQ CPU @ 2.60GHz         "}, Params{ 0, 1, 32, 2, 8, 16, 64, 16, 8, 64, 0, 1, 1, 0, 1, 4 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v3 @ 2.40GHz         "}, Params{ 1, 2, 1, 1, 16, 16, 16, 8, 8, 64, 0, 0, 0, 0, 1, 1 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v4 @ 2.20GHz         "}, Params{ 1, 2, 1, 1, 16, 16, 16, 4, 4, 16, 0, 0, 0, 0, 1, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 16, 8, 8, 64, 1, 1, 0, 0, 1, 4 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics 620                          "}, Params{ 0, 1, 16, 2, 16, 8, 32, 8, 8, 32, 0, 0, 1, 0, 1, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 16, 8, 32, 8, 8, 32, 0, 0, 1, 0, 1, 1 } },
        } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "default", {
          { Name{"Intel(R) Many Integrated Core Acceleration Card   "}, Params{ 0, 1, 32, 8, 8, 16, 16, 16, 16, 128, 0, 0, 1, 0, 1, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 8, 8, 16, 16, 16, 16, 128, 0, 0, 1, 0, 1, 4 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { Name{"GeForce GTX 480                                   "}, Params{ 0, 1, 16, 2, 8, 16, 32, 32, 8, 64, 1, 1, 1, 0, 1, 2 } },
          { Name{"GeForce GTX 580                                   "}, Params{ 0, 1, 32, 2, 32, 16, 64, 8, 8, 32, 0, 1, 1, 1, 1, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 8, 16, 32, 8, 8, 32, 0, 1, 1, 0, 1, 2 } },
        } },
        { "SM3.0", {
          { Name{"GRID K520                                         "}, Params{ 0, 1, 16, 2, 8, 8, 16, 8, 8, 32, 1, 0, 0, 1, 2, 2 } },
          { Name{"GeForce GTX 670                                   "}, Params{ 0, 1, 32, 8, 16, 32, 128, 16, 8, 32, 0, 1, 1, 0, 1, 1 } },
          { Name{"GeForce GTX 680                                   "}, Params{ 0, 1, 32, 8, 8, 8, 32, 16, 32, 128, 1, 0, 0, 1, 2, 4 } },
          { Name{"GeForce GTX 760 Ti OEM                            "}, Params{ 0, 1, 16, 2, 8, 16, 32, 16, 8, 32, 1, 0, 0, 0, 2, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 8, 8, 16, 32, 32, 32, 0, 0, 0, 0, 2, 1 } },
        } },
        { "SM3.5", {
          { Name{"GeForce GTX TITAN                                 "}, Params{ 0, 1, 16, 8, 16, 8, 32, 16, 32, 128, 1, 1, 1, 1, 2, 2 } },
          { Name{"GeForce GTX TITAN Black                           "}, Params{ 0, 1, 16, 2, 16, 8, 16, 16, 8, 16, 1, 1, 1, 0, 1, 1 } },
          { Name{"Tesla K20m                                        "}, Params{ 0, 1, 16, 2, 32, 8, 32, 16, 16, 64, 1, 0, 0, 0, 1, 1 } },
          { Name{"Tesla K40m                                        "}, Params{ 0, 1, 32, 2, 16, 8, 64, 16, 32, 128, 1, 0, 1, 1, 2, 4 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 16, 8, 16, 16, 8, 16, 1, 0, 0, 0, 1, 1 } },
        } },
        { "SM5.0", {
          { Name{"GeForce 920MX                                     "}, Params{ 0, 1, 32, 2, 8, 8, 32, 8, 8, 32, 0, 0, 0, 0, 1, 2 } },
          { Name{"GeForce GTX 750                                   "}, Params{ 0, 1, 32, 8, 16, 32, 64, 16, 8, 128, 0, 0, 0, 1, 2, 1 } },
          { Name{"GeForce GTX 750 Ti                                "}, Params{ 0, 1, 32, 2, 8, 8, 32, 16, 16, 32, 0, 0, 0, 0, 4, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 32, 0, 0, 0, 0, 2, 2 } },
        } },
        { "SM5.2", {
          { Name{"GeForce GTX 970                                   "}, Params{ 0, 1, 32, 2, 8, 8, 16, 16, 16, 32, 0, 0, 0, 0, 2, 1 } },
          { Name{"GeForce GTX 980                                   "}, Params{ 0, 1, 32, 8, 16, 8, 64, 32, 32, 128, 0, 0, 1, 0, 2, 4 } },
          { Name{"GeForce GTX TITAN X                               "}, Params{ 0, 1, 16, 8, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, 1, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 8, 8, 16, 16, 16, 16, 0, 0, 0, 0, 1, 1 } },
        } },
        { "SM6.0", {
          { Name{"Tesla P100-PCIE-16GB                              "}, Params{ 0, 1, 16, 2, 16, 16, 64, 32, 8, 64, 0, 1, 1, 1, 4, 1 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 16, 2, 16, 16, 64, 32, 8, 64, 0, 1, 1, 1, 4, 1 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1070                                  "}, Params{ 0, 1, 16, 2, 8, 16, 32, 8, 8, 64, 0, 0, 1, 1, 2, 8 } },
          { Name{"GeForce GTX 1070 Ti                               "}, Params{ 0, 1, 32, 2, 8, 8, 32, 16, 16, 32, 0, 0, 0, 0, 1, 2 } },
          { Name{"GeForce GTX 1080                                  "}, Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 64, 0, 0, 0, 0, 2, 4 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 0, 1, 16, 2, 16, 16, 16, 16, 16, 64, 0, 0, 1, 0, 1, 4 } },
          { Name{"TITAN X (Pascal)                                  "}, Params{ 0, 1, 32, 2, 32, 32, 32, 16, 16, 32, 0, 0, 0, 0, 1, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 16, 16, 64, 0, 0, 0, 0, 2, 4 } },
        } },
        { "SM7.5", {
          { Name{"TITAN RTX                                         "}, Params{ 1, 2, 1, 1, 16, 16, 32, 8, 8, 16, 0, 0, 0, 0, 2, 1 } },
          { kDeviceNameDefault                                        , Params{ 1, 2, 1, 1, 16, 16, 32, 8, 8, 16, 0, 0, 0, 0, 2, 1 } },
        } },
        { "SM8.0", {
          { Name{"A100-PCIE-40GB                                    "}, Params{ 0, 1, 32, 2, 32, 32, 64, 8, 8, 32, 1, 1, 0, 0, 2, 2 } },
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 32, 32, 64, 8, 8, 32, 1, 1, 0, 0, 2, 2 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 32, 32, 64, 8, 8, 32, 1, 1, 0, 0, 2, 2 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 0, 1, 32, 2, 16, 16, 32, 8, 8, 32, 1, 1, 0, 0, 2, 4 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
