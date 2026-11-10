/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c991c; name: FUN_002c991c
 */


undefined8 FUN_002c991c(void *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  size_t sVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *__dest;
  long lVar12;
  char *local_140;
  undefined8 uStack_138;
  undefined1 *local_110;
  long lStack_108;
  undefined1 auStack_100 [32];
  char *local_e0;
  undefined8 uStack_d8;
  byte local_b0 [16];
  long *local_a0;
  undefined1 auStack_98 [32];
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  uVar8 = 0;
  local_68 = (long *)0x0;
  lVar10 = *(long *)(param_2 + 0x38);
  if (*(long *)(param_2 + 0x40) != lVar10) {
    lVar12 = 0;
    uVar9 = 0;
    do {
      if (*(int *)(lVar10 + lVar12) == 5) {
                    /* try { // try from 002c99bc to 002c99c7 has its CatchHandler @ 002c9cb4 */
        param_1 = (void *)FUN_002c9d10(param_1,(int *)(lVar10 + lVar12),uVar9,param_3);
        if (param_1 != (void *)0x0) {
          if (local_70 == local_68) {
            lVar10 = (long)local_70 - (long)local_78 >> 3;
            uVar1 = lVar10 + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 002c9c94 to 002c9c9b has its CatchHandler @ 002c9c9c */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar7 = (long)local_68 - (long)local_78 >> 2;
            if (uVar1 <= uVar7) {
              uVar1 = uVar7;
            }
            if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
              uVar1 = 0x1fffffffffffffff;
            }
            if (uVar1 == 0) {
              pvVar3 = (void *)0x0;
            }
            else {
              pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
            }
            plVar6 = (long *)((long)pvVar3 + lVar10 * 8);
            plVar11 = (long *)((long)pvVar3 + uVar1 * 8);
            *plVar6 = (long)param_1;
            sVar5 = (long)local_70 - (long)local_78;
            __dest = (long *)((long)plVar6 - sVar5);
            if (0 < (long)sVar5) {
              pvVar3 = memcpy(__dest,local_78,sVar5);
            }
            bVar2 = local_78 != (long *)0x0;
            param_1 = pvVar3;
            plVar4 = local_78;
            local_78 = __dest;
            local_70 = plVar6 + 1;
            local_68 = plVar11;
            if (bVar2) goto LAB_002c9bac;
          }
          else {
            *local_70 = (long)param_1;
            local_70 = local_70 + 1;
          }
        }
      }
      else {
        local_e0 = "array element ";
        uStack_d8 = 0xe;
                    /* try { // try from 002c9a3c to 002c9a47 has its CatchHandler @ 002c9cb0 */
        lStack_108 = FUN_00394c40(uVar9,auStack_100);
        lStack_108 = lStack_108 - (long)auStack_100;
        local_140 = " is not an object";
        uStack_138 = 0x11;
                    /* try { // try from 002c9a60 to 002c9a73 has its CatchHandler @ 002c9cac */
        local_110 = auStack_100;
        FUN_00395a70(local_b0,&local_e0,&local_110,&local_140);
        plVar4 = (long *)((ulong)local_b0 | 1);
        if ((local_b0[0] & 1) != 0) {
          plVar4 = local_a0;
        }
                    /* try { // try from 002c9a84 to 002c9aa3 has its CatchHandler @ 002c9cc4 */
        FUN_00367770(auStack_98,plVar4);
        param_1 = (void *)FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                                       ,0xcf,auStack_98,0,0);
        if (local_70 < local_68) {
          *local_70 = (long)param_1;
          local_70 = local_70 + 1;
        }
        else {
          lVar10 = (long)local_70 - (long)local_78 >> 3;
          uVar1 = lVar10 + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 002c9c8c to 002c9c93 has its CatchHandler @ 002c9ca0 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar7 = (long)local_68 - (long)local_78 >> 2;
          if (uVar1 <= uVar7) {
            uVar1 = uVar7;
          }
          if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
          }
          plVar4 = (long *)((long)pvVar3 + lVar10 * 8);
          plVar6 = (long *)((long)pvVar3 + uVar1 * 8);
          *plVar4 = (long)param_1;
          sVar5 = (long)local_70 - (long)local_78;
          plVar11 = (long *)((long)plVar4 - sVar5);
          param_1 = pvVar3;
          if (0 < (long)sVar5) {
            param_1 = memcpy(plVar11,local_78,sVar5);
          }
          bVar2 = local_78 != (long *)0x0;
          local_78 = plVar11;
          local_70 = plVar4 + 1;
          local_68 = plVar6;
          if (bVar2) {
            param_1 = (void *)FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        if ((local_b0[0] & 1) != 0) {
          plVar4 = local_a0;
LAB_002c9bac:
          param_1 = (void *)FUN_0049e790(PTR_LAB_047cba48,plVar4);
        }
      }
      lVar10 = *(long *)(param_2 + 0x38);
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x50;
    } while (uVar9 < (ulong)((*(long *)(param_2 + 0x40) - lVar10 >> 4) * -0x3333333333333333));
    if (local_70 == local_78) {
      uVar8 = 0;
      plVar4 = local_78;
    }
    else {
                    /* try { // try from 002c9c04 to 002c9c33 has its CatchHandler @ 002c9ca4 */
      FUN_003673f0(&local_e0,"errors parsing \"channel_creds\" array");
      uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0xd6,&local_e0,local_78,(long)local_70 - (long)local_78 >> 3);
      plVar4 = local_78;
      if (local_70 != local_78) {
        uVar9 = 0;
        plVar4 = local_78;
        plVar6 = local_70;
        plVar11 = local_78;
        do {
          if (4 < (ulong)plVar11[uVar9]) {
                    /* try { // try from 002c9c84 to 002c9c87 has its CatchHandler @ 002c9ca8 */
            FUN_00350fd0();
            plVar4 = local_78;
            plVar6 = local_70;
            plVar11 = local_78;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)((long)plVar6 - (long)plVar11 >> 3));
      }
    }
    local_70 = plVar4;
    if (local_70 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return uVar8;
}


