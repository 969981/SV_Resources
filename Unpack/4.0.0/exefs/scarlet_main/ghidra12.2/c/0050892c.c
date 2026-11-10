/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050892c; name: FUN_0050892c
 */


void FUN_0050892c(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x1;
  long *plVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  byte local_80 [8];
  uint local_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if (extraout_x1 == 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
                    /* try { // try from 005089f8 to 00508a07 has its CatchHandler @ 00508d2c */
    FUN_0052d79c(local_80,param_2);
    bVar2 = (local_80[0] & 1) != 0;
    uVar4 = (ulong)local_80 | 1;
    if (bVar2) {
      uVar4 = local_70;
    }
    uVar1 = (uint)(local_80[0] >> 1);
    if (bVar2) {
      uVar1 = local_78;
    }
                    /* try { // try from 00508a28 to 00508a33 has its CatchHandler @ 00508d0c */
    FUN_0052cf70(&local_a0,uVar4,uVar1,0xffffffff);
                    /* try { // try from 00508a34 to 00508a3f has its CatchHandler @ 00508d08 */
    FUN_0051563c(&local_68,&local_a0);
    if ((local_80[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
                    /* try { // try from 00508a58 to 00508a6b has its CatchHandler @ 00508d04 */
    FUN_00508dc4(param_1,&local_68,param_3,10);
    if (local_68 != local_60) {
                    /* try { // try from 00508a78 to 00508a7f has its CatchHandler @ 00508cf0 */
      FUN_00514600(&local_68);
    }
    if (local_68 == 0) {
      return;
    }
    local_60 = local_68;
    goto LAB_00508cb0;
  }
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar9 = (long *)(param_1 + 0x40);
  plVar10 = (long *)*plVar9;
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar9;
    do {
      if ((ulong)plVar10[4] >= uVar4) {
        plVar15 = plVar10;
      }
      plVar10 = (long *)plVar10[(ulong)plVar10[4] < uVar4];
    } while (plVar10 != (long *)0x0);
    if ((plVar15 != plVar9) && ((ulong)plVar15[4] <= uVar4)) {
                    /* WARNING: Could not recover jumptable at 0x00508bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)plVar15[5] + 0x10))
                ((long *)plVar15[5],param_2,*(undefined1 *)(param_1 + 4),param_3);
      return;
    }
  }
  pbVar12 = *(byte **)(uVar4 + 8);
  sVar5 = strlen(PTR_s_google_protobuf_Any_047cd720);
  if ((*pbVar12 & 1) == 0) {
    if (sVar5 == *pbVar12 >> 1) {
      if (sVar5 == 0xffffffffffffffff) {
LAB_00508ce0:
                    /* try { // try from 00508ce0 to 00508ce7 has its CatchHandler @ 00508ce8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar12 = pbVar12 + 1;
joined_r0x00508aa8:
      if ((((sVar5 == 0) ||
           (iVar3 = memcmp(pbVar12,PTR_s_google_protobuf_Any_047cd720,sVar5), iVar3 == 0)) &&
          (*(char *)(param_1 + 9) != '\0')) &&
         (uVar6 = FUN_00509798(param_1,param_2,param_3), (uVar6 & 1) != 0)) {
        return;
      }
    }
  }
  else if (sVar5 == *(size_t *)(pbVar12 + 8)) {
    if (sVar5 == 0xffffffffffffffff) goto LAB_00508ce0;
    pbVar12 = *(byte **)(pbVar12 + 0x10);
    goto joined_r0x00508aa8;
  }
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  local_90 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(uVar4 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 00508b98 to 00508ba7 has its CatchHandler @ 00508d58 */
    FUN_004f4acc(extraout_x1,param_2,&local_a0);
  }
  else {
    uVar13 = *(undefined8 *)(uVar4 + 0x28);
    puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
    plVar9 = local_a0;
    puVar16 = puVar7 + 1;
    *puVar7 = uVar13;
    sVar5 = (long)local_98 - (long)local_a0;
    plVar10 = (long *)((long)puVar7 - sVar5);
    if (0 < (long)sVar5) {
      memcpy(plVar10,local_a0,sVar5);
    }
    local_a0 = plVar10;
    local_98 = puVar16;
    local_90 = puVar16;
    if (plVar9 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar9);
    }
    uVar14 = (long)(sVar5 + 8) >> 3;
    uVar6 = uVar14 + 1;
    if (uVar6 >> 0x3d != 0) {
                    /* try { // try from 00508cd8 to 00508cdf has its CatchHandler @ 00508cec */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(uVar4 + 0x28);
    uVar4 = (long)(sVar5 + 8) >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0xffffffffffffffe < uVar14) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar6 << 3);
    }
    plVar10 = local_a0;
    plVar9 = (long *)(lVar8 + uVar14 * 8);
    lVar8 = lVar8 + uVar6 * 8;
    *plVar9 = lVar11 + 0x98;
    sVar5 = (long)local_98 - (long)local_a0;
    plVar15 = (long *)((long)plVar9 - sVar5);
    if (0 < (long)sVar5) {
      memcpy(plVar15,local_a0,sVar5);
    }
    local_a0 = plVar15;
    local_98 = plVar9 + 1;
    local_90 = (undefined8 *)lVar8;
    if (plVar10 != (long *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar10);
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_00511920(local_a0,local_98);
  }
  if (local_98 != local_a0) {
    uVar4 = 0;
    do {
                    /* try { // try from 00508c54 to 00508c67 has its CatchHandler @ 00508d5c */
      FUN_00509c90(param_1,param_2,extraout_x1,local_a0[uVar4],param_3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)((long)local_98 - (long)local_a0 >> 3));
  }
  if (*(char *)(param_1 + 7) == '\0') {
                    /* try { // try from 00508c84 to 00508ca3 has its CatchHandler @ 00508d58 */
    uVar13 = FUN_004efc18(extraout_x1,param_2);
    FUN_00508dc4(param_1,uVar13,param_3,10);
  }
  if (local_a0 == (long *)0x0) {
    return;
  }
  local_98 = local_a0;
LAB_00508cb0:
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


