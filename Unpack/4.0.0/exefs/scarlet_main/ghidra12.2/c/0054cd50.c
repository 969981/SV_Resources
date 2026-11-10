/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054cd50; name: FUN_0054cd50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054cd50(undefined4 *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c8;
  char local_c0;
  undefined *local_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  *param_4 = 1;
  uVar4 = (**(code **)(*param_2 + 0x48))();
  puVar3 = PTR_DAT_047cbeb8;
  puVar2 = PTR_DAT_047cbb08;
  if (uVar4 < 0x18) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x140))(&local_70);
    lVar6 = lStack_60;
    uVar8 = uStack_68;
    puVar3 = local_70;
    lVar5 = (long)&uStack_68 + 1;
    if (local_70 != (undefined *)0x0) {
      lVar5 = lStack_60;
    }
                    /* try { // try from 0054cdc8 to 0054cdcf has its CatchHandler @ 0054cff8 */
    lVar5 = FUN_0052d550(param_2,lVar5);
    lVar6 = lVar6 + uVar8;
    if (puVar3 == (undefined *)0x0) {
      lVar6 = (long)&uStack_68 + (uVar8 & 0xff) + 1;
    }
    if (lVar6 != lVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0054cfe0 to 0054cfe3 has its CatchHandler @ 0054cff8 */
      abort();
    }
                    /* try { // try from 0054cdf8 to 0054ce03 has its CatchHandler @ 0054cff4 */
    lVar6 = (**(code **)(**(long **)puVar2 + 0xf0))(*(long **)puVar2,&local_70,1);
    lVar5 = *param_3;
    *param_3 = lVar6;
                    /* try { // try from 0054ce18 to 0054ce27 has its CatchHandler @ 0054d000 */
    uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
    FUN_002246b8(param_1,uVar7);
    if (lVar5 != 0) {
                    /* try { // try from 0054ce38 to 0054ce3f has its CatchHandler @ 0054cfe8 */
      (**(code **)(**(long **)puVar2 + 0xc0))(*(long **)puVar2,lVar5);
    }
    uStack_d8 = uStack_68;
    local_e0 = local_70;
    local_c8 = uStack_58;
    local_d0 = lStack_60;
                    /* try { // try from 0054ce54 to 0054ce5b has its CatchHandler @ 0054cff0 */
    (**(code **)(**(long **)puVar2 + 0x148))(*(long **)puVar2,&local_e0);
  }
  else {
    local_d0 = 0;
    local_c0 = '\0';
    local_e0 = PTR_DAT_047cbeb8 + 0x10;
    uStack_d8 = CONCAT44(uVar4,0x100000);
    if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xf0))(*(long **)PTR_DAT_047cbb08,0,0);
    if (*param_3 != 0) {
      (**(code **)(**(long **)puVar2 + 0xc0))();
      *param_3 = 0;
    }
    local_c8 = lVar6 + 0x18;
    *param_3 = lVar6;
                    /* try { // try from 0054ced4 to 0054ceff has its CatchHandler @ 0054d044 */
    uVar8 = FUN_0052d5bc(param_2,&local_e0);
    puVar1 = PTR_FUN_047cba38;
    if ((uVar8 & 1) == 0) {
      pcVar9 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
      uVar7 = s_Failed_to_serialize_message_03c0f32a._0_8_;
      *(ulong *)(pcVar9 + 8) =
           CONCAT53(s_Failed_to_serialize_message_03c0f32a._11_5_,
                    s_Failed_to_serialize_message_03c0f32a._8_3_);
      *(undefined8 *)pcVar9 = uVar7;
      uVar11 = s_Failed_to_serialize_message_03c0f32a._19_8_;
      uVar7 = CONCAT35(s_Failed_to_serialize_message_03c0f32a._16_3_,
                       s_Failed_to_serialize_message_03c0f32a._11_5_);
      pcVar9[0x1b] = '\0';
      *(undefined8 *)(pcVar9 + 0x13) = uVar11;
      *(undefined8 *)(pcVar9 + 0xb) = uVar7;
      *param_1 = 0xd;
      puVar10 = (undefined8 *)FUN_0049e770(puVar1,0x20);
      uVar11 = _UNK_03caa878;
      uVar7 = _DAT_03caa870;
      *(undefined8 **)(param_1 + 6) = puVar10;
      *(undefined8 *)(param_1 + 4) = uVar11;
      *(undefined8 *)(param_1 + 2) = uVar7;
      uVar11 = *(undefined8 *)(pcVar9 + 8);
      uVar7 = *(undefined8 *)pcVar9;
      uVar12 = *(undefined8 *)(pcVar9 + 0xc);
      *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)(pcVar9 + 0x14);
      *(undefined8 *)((long)puVar10 + 0xc) = uVar12;
      puVar10[1] = uVar11;
      *puVar10 = uVar7;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_0049e790(PTR_LAB_047cba48,pcVar9);
    }
    else {
      uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
      FUN_002246b8(param_1,uVar7);
    }
    if (local_c0 != '\0') {
      local_e0 = puVar3 + 0x10;
                    /* try { // try from 0054cfbc to 0054cfc3 has its CatchHandler @ 0054cfec */
      (**(code **)(**(long **)puVar2 + 0x148))(*(long **)puVar2,&local_70);
    }
  }
  return;
}


