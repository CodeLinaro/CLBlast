
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm_Direct32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmDirectSingle = {
  "XgemmDirect", Precision::kSingle, {"KWID", "MDIMAD", "MDIMCD", "NDIMBD", "NDIMCD", "PADA", "PADB", "VWMD", "VWND", "WGD"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 2, 8, 8, 32, 32, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 32, 32, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Fiji", {
          { Name{"AMD Radeon R9 Fury X                              "}, Params{ 2, 16, 16, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
          { Name{"AMD Radeon R9 M370X Compute Engine                "}, Params{ 2, 8, 8, 8, 8, 1, 1, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Tonga", {
          { Name{"AMD Radeon R9 380                                 "}, Params{ 16, 16, 16, 32, 8, 0, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 16, 16, 16, 32, 8, 0, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Turks", {
          { Name{"AMD Radeon HD 6770M                               "}, Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Vancouver", {
          { Name{"ATI Radeon HD 6750M                               "}, Params{ 8, 8, 16, 8, 8, 1, 0, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 8, 16, 8, 8, 1, 0, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "default", {
          { Name{"AMD Radeon Pro 580 Compute Engine                 "}, Params{ 2, 8, 8, 16, 16, 1, 1, 2, 1, 16, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T628                                         "}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Mali-T760                                         "}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 8, 8, 1, 1, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz         "}, Params{ 2, 8, 8, 8, 8, 0, 0, 1, 8, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-4570 CPU @ 3.20GHz           "}, Params{ 8, 16, 16, 16, 16, 0, 0, 1, 1, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-4590S CPU @ 3.00GHz          "}, Params{ 8, 8, 8, 8, 8, 0, 0, 8, 4, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz          "}, Params{ 2, 32, 32, 32, 32, 0, 0, 1, 1, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz   "}, Params{ 16, 16, 8, 8, 8, 0, 0, 2, 4, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz          "}, Params{ 2, 8, 8, 8, 8, 0, 0, 2, 2, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-6770HQ CPU @ 2.60GHz         "}, Params{ 2, 8, 8, 16, 8, 0, 0, 4, 4, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i9-9980HK CPU @ 2.40GHz         "}, Params{ 8, 32, 32, 32, 16, 0, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v3 @ 2.40GHz         "}, Params{ 16, 8, 16, 16, 16, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v4 @ 2.20GHz         "}, Params{ 16, 8, 16, 16, 16, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics 6000 BroadWell U-Processor GT"}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) HD Graphics 620                          "}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) HD Graphics IvyBridge M GT2              "}, Params{ 8, 16, 32, 16, 8, 1, 0, 1, 1, 64, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) HD Graphics Skylake ULT GT2              "}, Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 8, 0, 0, 0, 0, 0, 0 } },
          { Name{"Iris Pro                                          "}, Params{ 2, 16, 16, 8, 8, 1, 1, 2, 4, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 8, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { Name{"GeForce GTX 580                                   "}, Params{ 2, 16, 8, 32, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 8, 32, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM3.0", {
          { Name{"GeForce GT 650M                                   "}, Params{ 16, 16, 16, 8, 16, 1, 0, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 760 Ti OEM                            "}, Params{ 16, 32, 8, 16, 16, 1, 1, 1, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 16, 16, 16, 16, 1, 1, 2, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM3.5", {
          { Name{"GeForce GTX TITAN Black                           "}, Params{ 2, 8, 8, 16, 16, 1, 1, 4, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 16, 16, 1, 1, 4, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM5.0", {
          { Name{"GeForce 920MX                                     "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 750 Ti                                "}, Params{ 2, 8, 8, 8, 8, 1, 1, 4, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 4, 4, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM5.2", {
          { Name{"GeForce GTX 970                                   "}, Params{ 2, 8, 8, 32, 8, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 32, 8, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.0", {
          { Name{"Tesla P100-PCIE-16GB                              "}, Params{ 16, 8, 8, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 16, 8, 8, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1070 Ti                               "}, Params{ 2, 16, 8, 8, 8, 1, 1, 1, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 1080                                  "}, Params{ 16, 16, 8, 16, 8, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 16, 8, 8, 16, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"TITAN X (Pascal)                                  "}, Params{ 8, 32, 8, 8, 16, 1, 1, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 4, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM7.0", {
          { Name{"Quadro GV100                                      "}, Params{ 2, 8, 8, 16, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 16, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM7.5", {
          { Name{"TITAN RTX                                         "}, Params{ 16, 8, 16, 32, 8, 1, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 16, 8, 16, 32, 8, 1, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM8.0", {
          { Name{"A100-PCIE-40GB                                    "}, Params{ 8, 8, 16, 32, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 8, 16, 32, 16, 1, 1, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 16, 16, 1, 1, 4, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { Name{"QUALCOMM Adreno(TM)                               "}, Params{ 2, 8, 8, 8, 8, 1, 1, 2, 1, 16, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 2, 1, 16, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 2, 8, 8, 8, 8, 1, 1, 1, 1, 16, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
