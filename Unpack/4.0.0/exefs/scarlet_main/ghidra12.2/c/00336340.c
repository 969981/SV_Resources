/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336340; name: FUN_00336340
 */


void FUN_00336340(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  size_t sVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_a0;
  undefined8 *****local_98 [4];
  long *local_78;
  long *local_70;
  long *local_68;
  long local_58;
  
  *param_1 = (long)(PTR_DAT_047ccc80 + 0x10);
  param_1[1] = 1;
  lVar12 = param_2[1];
  lVar4 = *param_2;
  param_1[4] = param_2[2];
  param_1[3] = lVar12;
  param_1[2] = lVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 00336394 to 0033639f has its CatchHandler @ 003367c8 */
  FUN_0028f3c0(param_1 + 5,param_3);
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if ((int)param_1[5] == 5) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    local_58 = 0;
                    /* try { // try from 003363e4 to 003363f3 has its CatchHandler @ 003367b4 */
    FUN_00339368(&local_a0,param_1 + 5,&local_58);
                    /* try { // try from 003363f4 to 00336403 has its CatchHandler @ 00336714 */
    FUN_0033690c(param_1 + 0xf,&local_a0);
    puVar3 = PTR_LAB_047cba48;
    uVar14 = local_a0 & 1;
    pppppuVar2 = local_98;
    if (uVar14 != 0) {
      pppppuVar2 = local_98[0];
    }
    uVar13 = local_a0 >> 1;
    if ((uVar13 != 0) && (pppppuVar2 != (undefined8 *****)0x0)) {
      do {
        uVar14 = uVar13 - 1;
        ppppuVar11 = pppppuVar2[uVar13 - 1];
        pppppuVar2[uVar13 - 1] = (undefined8 ****)0x0;
        if (ppppuVar11 != (undefined8 ****)0x0) {
          (*(code *)**ppppuVar11)(ppppuVar11);
          FUN_0049e790(puVar3,ppppuVar11);
        }
        uVar13 = uVar14;
      } while (uVar14 != 0);
      uVar14 = local_a0 & 1;
    }
    if (uVar14 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_98[0]);
    }
    if (local_58 != 0) {
      if (local_70 == local_68) {
        lVar4 = (long)local_70 - (long)local_78 >> 3;
        uVar14 = lVar4 + 1;
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00336700 to 00336707 has its CatchHandler @ 00336710 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar13 = (long)local_68 - (long)local_78 >> 2;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_0049e770(PTR_FUN_047cba38,uVar14 << 3);
        }
        plVar7 = (long *)(lVar12 + lVar4 * 8);
        plVar9 = (long *)(lVar12 + uVar14 * 8);
        *plVar7 = local_58;
        sVar8 = (long)local_70 - (long)local_78;
        plVar10 = (long *)((long)plVar7 - sVar8);
        if (0 < (long)sVar8) {
          memcpy(plVar10,local_78,sVar8);
        }
        bVar1 = local_78 != (long *)0x0;
        local_78 = plVar10;
        local_70 = plVar7 + 1;
        local_68 = plVar9;
        if (bVar1) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      else {
        *local_70 = local_58;
        local_70 = local_70 + 1;
      }
    }
                    /* try { // try from 00336578 to 0033657f has its CatchHandler @ 003367d0 */
    lVar4 = FUN_00336ac8(param_1);
    if (lVar4 != 0) {
      if (local_70 == local_68) {
        lVar12 = (long)local_70 - (long)local_78 >> 3;
        uVar14 = lVar12 + 1;
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00336708 to 0033670f has its CatchHandler @ 003367d0 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar13 = (long)local_68 - (long)local_78 >> 2;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar14 = 0x1fffffffffffffff;
        }
        if (uVar14 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar14 << 3);
        }
        plVar7 = (long *)(lVar5 + lVar12 * 8);
        plVar9 = (long *)(lVar5 + uVar14 * 8);
        *plVar7 = lVar4;
        sVar8 = (long)local_70 - (long)local_78;
        plVar10 = (long *)((long)plVar7 - sVar8);
        if (0 < (long)sVar8) {
          memcpy(plVar10,local_78,sVar8);
        }
        bVar1 = local_78 != (long *)0x0;
        local_78 = plVar10;
        local_70 = plVar7 + 1;
        local_68 = plVar9;
        if (bVar1) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      else {
        *local_70 = lVar4;
        local_70 = local_70 + 1;
      }
    }
    plVar7 = local_78;
    if (local_78 != local_70) {
                    /* try { // try from 00336648 to 00336677 has its CatchHandler @ 003367d0 */
      FUN_003673f0(&local_a0,"Service config parsing error");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                           ,0x3d,&local_a0,local_78,(long)local_70 - (long)local_78 >> 3);
      plVar7 = local_78;
      if (local_70 != local_78) {
        uVar14 = 0;
        plVar9 = local_70;
        plVar10 = local_78;
        do {
          if (4 < (ulong)plVar10[uVar14]) {
                    /* try { // try from 003366f8 to 003366fb has its CatchHandler @ 003367d4 */
            FUN_00350fd0();
            plVar7 = local_78;
            plVar9 = local_70;
            plVar10 = local_78;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulong)((long)plVar9 - (long)plVar10 >> 3));
      }
      *param_4 = uVar6;
    }
    if (plVar7 != (long *)0x0) {
      local_70 = plVar7;
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  else {
                    /* try { // try from 00336468 to 00336493 has its CatchHandler @ 003367b8 */
    FUN_003673f0(&local_a0,"JSON value is not an object");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x31,&local_a0,0,0);
    *param_4 = uVar6;
  }
  return;
}


