/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336ac8; name: FUN_00336ac8
 */


/* WARNING: Removing unreachable block (ram,0x00336c30) */
/* WARNING: Removing unreachable block (ram,0x00336bd4) */
/* WARNING: Removing unreachable block (ram,0x00336bc4) */
/* WARNING: Removing unreachable block (ram,0x00336c18) */
/* WARNING: Removing unreachable block (ram,0x00336e70) */
/* WARNING: Removing unreachable block (ram,0x00336b94) */
/* WARNING: Removing unreachable block (ram,0x00336bf0) */

undefined8 FUN_00336ac8(long param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *local_98;
  long *local_90;
  long *local_88;
  byte local_80;
  char local_7f [8];
  undefined4 local_77;
  undefined1 local_73;
  undefined8 local_70;
  
  local_80 = 0x18;
  local_77 = 0x6769666e;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_73 = 0;
  local_7f = (char  [8])s_methodConfig_03bfad70._0_8_;
                    /* try { // try from 00336b1c to 00336b23 has its CatchHandler @ 00336e88 */
  lVar5 = FUN_0027bd44(param_1 + 0x48,&local_80);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if (param_1 + 0x50 != lVar5) {
    if (*(int *)(lVar5 + 0x38) != 6) {
                    /* try { // try from 00336b58 to 00336b83 has its CatchHandler @ 00336e80 */
      FUN_003673f0(&local_80,"field:methodConfig error:not of type Array");
      lVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                           ,0x89,&local_80,0,0);
      local_98 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
      local_88 = local_98 + 1;
      local_90 = local_98 + 1;
      *local_98 = lVar6;
    }
    piVar3 = *(int **)(lVar5 + 0x78);
    plVar4 = local_90;
    for (piVar2 = *(int **)(lVar5 + 0x70); local_90 = plVar4, piVar2 != piVar3;
        piVar2 = piVar2 + 0x14) {
      if (*piVar2 == 5) {
                    /* try { // try from 00336c88 to 00336c93 has its CatchHandler @ 00336ec4 */
        lVar5 = FUN_00337190(param_1,piVar2);
        if (lVar5 != 0) {
          if (plVar4 != local_88) goto LAB_00336c68;
          lVar6 = (long)plVar4 - (long)local_98 >> 3;
          uVar10 = lVar6 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 00336e68 to 00336e6f has its CatchHandler @ 00336e78 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
LAB_00336d10:
          uVar8 = (long)local_88 - (long)local_98 >> 2;
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
          if (0xffffffffffffffe < (ulong)((long)local_88 - (long)local_98 >> 3)) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar10 << 3);
          }
          plVar11 = (long *)(lVar7 + lVar6 * 8);
          local_88 = (long *)(lVar7 + uVar10 * 8);
          local_90 = plVar11 + 1;
          *plVar11 = lVar5;
          __n = (long)plVar4 - (long)local_98;
          plVar11 = (long *)((long)plVar11 - __n);
          if (0 < (long)__n) {
            memcpy(plVar11,local_98,__n);
          }
          bVar1 = local_98 != (long *)0x0;
          local_98 = plVar11;
          if (bVar1) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
      }
      else {
                    /* try { // try from 00336cc4 to 00336ce7 has its CatchHandler @ 00336ec8 */
        FUN_003673f0(&local_80,"field:methodConfig error:not of type Object");
        lVar5 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                             ,0x8e,&local_80,0,0);
        if (local_88 <= plVar4) {
          lVar6 = (long)plVar4 - (long)local_98 >> 3;
          uVar10 = lVar6 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 00336e60 to 00336e67 has its CatchHandler @ 00336e7c */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_00336d10;
        }
LAB_00336c68:
        local_90 = plVar4 + 1;
        *plVar4 = lVar5;
      }
      plVar4 = local_90;
    }
  }
  if (local_90 == local_98) {
    uVar9 = 0;
  }
  else {
                    /* try { // try from 00336dd8 to 00336e07 has its CatchHandler @ 00336e84 */
    FUN_003673f0(&local_80,"Method Params");
    uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x97,&local_80,local_98,(long)local_90 - (long)local_98 >> 3);
    if (local_90 != local_98) {
      uVar10 = 0;
      do {
        if (4 < (ulong)local_98[uVar10]) {
                    /* try { // try from 00336e50 to 00336e53 has its CatchHandler @ 00336ec0 */
          FUN_00350fd0();
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)((long)local_90 - (long)local_98 >> 3));
    }
  }
  if (local_98 != (long *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar9;
}


