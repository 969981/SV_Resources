/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c86d4; name: FUN_002c86d4
 */


undefined8 FUN_002c86d4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *__dest;
  long lVar13;
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
  uVar9 = 0;
  local_68 = (long *)0x0;
  lVar3 = *(long *)(param_2 + 0x38);
  if (*(long *)(param_2 + 0x40) != lVar3) {
    lVar13 = 0;
    uVar10 = 0;
    do {
      if (*(int *)(lVar3 + lVar13) == 5) {
                    /* try { // try from 002c8774 to 002c877f has its CatchHandler @ 002c8a6c */
        lVar3 = FUN_002c93c0(param_1,(int *)(lVar3 + lVar13),uVar10);
        if (lVar3 != 0) {
          if (local_70 == local_68) {
            lVar11 = (long)local_70 - (long)local_78 >> 3;
            uVar1 = lVar11 + 1;
            if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 002c8a4c to 002c8a53 has its CatchHandler @ 002c8a54 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar8 = (long)local_68 - (long)local_78 >> 2;
            if (uVar1 <= uVar8) {
              uVar1 = uVar8;
            }
            if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
              uVar1 = 0x1fffffffffffffff;
            }
            if (uVar1 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
            }
            plVar7 = (long *)(lVar4 + lVar11 * 8);
            plVar12 = (long *)(lVar4 + uVar1 * 8);
            *plVar7 = lVar3;
            sVar6 = (long)local_70 - (long)local_78;
            __dest = (long *)((long)plVar7 - sVar6);
            if (0 < (long)sVar6) {
              memcpy(__dest,local_78,sVar6);
            }
            bVar2 = local_78 != (long *)0x0;
            plVar5 = local_78;
            local_78 = __dest;
            local_70 = plVar7 + 1;
            local_68 = plVar12;
            if (bVar2) goto LAB_002c8964;
          }
          else {
            *local_70 = lVar3;
            local_70 = local_70 + 1;
          }
        }
      }
      else {
        local_e0 = "array element ";
        uStack_d8 = 0xe;
                    /* try { // try from 002c87f4 to 002c87ff has its CatchHandler @ 002c8a68 */
        lStack_108 = FUN_00394c40(uVar10,auStack_100);
        lStack_108 = lStack_108 - (long)auStack_100;
        local_140 = " is not an object";
        uStack_138 = 0x11;
                    /* try { // try from 002c8818 to 002c882b has its CatchHandler @ 002c8a64 */
        local_110 = auStack_100;
        FUN_00395a70(local_b0,&local_e0,&local_110,&local_140);
        plVar5 = (long *)((ulong)local_b0 | 1);
        if ((local_b0[0] & 1) != 0) {
          plVar5 = local_a0;
        }
                    /* try { // try from 002c883c to 002c885b has its CatchHandler @ 002c8a7c */
        FUN_00367770(auStack_98,plVar5);
        lVar3 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                             ,0x9b,auStack_98,0,0);
        if (local_70 < local_68) {
          *local_70 = lVar3;
          local_70 = local_70 + 1;
        }
        else {
          lVar11 = (long)local_70 - (long)local_78 >> 3;
          uVar1 = lVar11 + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 002c8a44 to 002c8a4b has its CatchHandler @ 002c8a58 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar8 = (long)local_68 - (long)local_78 >> 2;
          if (uVar1 <= uVar8) {
            uVar1 = uVar8;
          }
          if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
          }
          plVar5 = (long *)(lVar4 + lVar11 * 8);
          plVar7 = (long *)(lVar4 + uVar1 * 8);
          *plVar5 = lVar3;
          sVar6 = (long)local_70 - (long)local_78;
          plVar12 = (long *)((long)plVar5 - sVar6);
          if (0 < (long)sVar6) {
            memcpy(plVar12,local_78,sVar6);
          }
          bVar2 = local_78 != (long *)0x0;
          local_78 = plVar12;
          local_70 = plVar5 + 1;
          local_68 = plVar7;
          if (bVar2) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        if ((local_b0[0] & 1) != 0) {
          plVar5 = local_a0;
LAB_002c8964:
          FUN_0049e790(PTR_LAB_047cba48,plVar5);
        }
      }
      lVar3 = *(long *)(param_2 + 0x38);
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x50;
    } while (uVar10 < (ulong)((*(long *)(param_2 + 0x40) - lVar3 >> 4) * -0x3333333333333333));
    if (local_70 == local_78) {
      uVar9 = 0;
      plVar5 = local_78;
    }
    else {
                    /* try { // try from 002c89bc to 002c89eb has its CatchHandler @ 002c8a5c */
      FUN_003673f0(&local_e0,"errors parsing \"xds_servers\" array");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                           ,0xa2,&local_e0,local_78,(long)local_70 - (long)local_78 >> 3);
      plVar5 = local_78;
      if (local_70 != local_78) {
        uVar10 = 0;
        plVar5 = local_78;
        plVar7 = local_70;
        plVar12 = local_78;
        do {
          if (4 < (ulong)plVar12[uVar10]) {
                    /* try { // try from 002c8a3c to 002c8a3f has its CatchHandler @ 002c8a60 */
            FUN_00350fd0();
            plVar5 = local_78;
            plVar7 = local_70;
            plVar12 = local_78;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)((long)plVar7 - (long)plVar12 >> 3));
      }
    }
    local_70 = plVar5;
    if (local_70 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return uVar9;
}


