/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050eecc; name: FUN_0050eecc
 */


undefined8 FUN_0050eecc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_58;
  undefined7 uStack_57;
  char cStack_50;
  undefined7 uStack_4f;
  undefined4 local_48;
  uint uStack_44;
  
  iVar1 = *(int *)((long)param_1 + 0xec);
  *(int *)((long)param_1 + 0xec) = iVar1 + -1;
  if (iVar1 < 1) {
    local_58 = 0x26;
    uStack_44 = uStack_44 & 0xffffff00;
    uStack_4f = s_Message_is_too_deep_03c97a05._8_7_;
    local_48 = CONCAT31(0x706565,s_Message_is_too_deep_03c97a05[0xf]);
    uStack_57 = s_Message_is_too_deep_03c97a05._0_7_;
    cStack_50 = s_Message_is_too_deep_03c97a05[7];
    plVar5 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
                    /* try { // try from 0050efd0 to 0050efd7 has its CatchHandler @ 0050f1e4 */
    if ((plVar5 != (long *)0x0) &&
       ((**(code **)(*plVar5 + 0x10))
                  (plVar5,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_58),
       (local_58 & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_44,local_48));
    }
    return 0;
  }
  lVar8 = param_1[2];
  if (lVar8 != 0) {
    lVar3 = FUN_00507590(lVar8,param_4);
    param_1[2] = lVar3;
  }
  local_58 = 0;
  uStack_57 = 0;
  cStack_50 = 0;
  uStack_4f = 0;
  local_48 = 0;
  uStack_44 = 0;
                    /* try { // try from 0050ef24 to 0050ef2f has its CatchHandler @ 0050f1ec */
  uVar4 = FUN_00510334(param_1,&local_58);
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)param_1[1];
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
      if (*(int *)(param_4 + 0x3c) != 3) goto LAB_0050f008;
LAB_0050ef5c:
      uVar6 = FUN_004f7ed4(param_3,param_2,param_4);
      if ((local_58 & 1) == 0) {
        uStack_68 = CONCAT71(uStack_4f,cStack_50);
        local_70 = CONCAT71(uStack_57,local_58);
        local_60 = (void *)CONCAT44(uStack_44,local_48);
      }
      else {
        uVar4 = CONCAT71(uStack_4f,cStack_50);
        pvVar2 = (void *)CONCAT44(uStack_44,local_48);
        if (uVar4 < 0x17) {
          pvVar7 = (void *)((ulong)&local_70 | 1);
          local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar4 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 0050f1a0 to 0050f1af has its CatchHandler @ 0050f1e8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar9 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
          local_70 = uVar9 | 1;
          uStack_68 = uVar4;
          local_60 = pvVar7;
        }
        memcpy(pvVar7,pvVar2,uVar4 + 1);
      }
                    /* try { // try from 0050f0b0 to 0050f0bf has its CatchHandler @ 0050f1c4 */
      uVar4 = FUN_005104ac(param_1,uVar6,&local_70);
      if ((local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
    }
    else {
                    /* try { // try from 0050ef44 to 0050ef6b has its CatchHandler @ 0050f1e8 */
      uVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,param_4);
      if (*(int *)(param_4 + 0x3c) == 3) goto LAB_0050ef5c;
LAB_0050f008:
                    /* try { // try from 0050f008 to 0050f017 has its CatchHandler @ 0050f1e8 */
      uVar6 = FUN_004f7424(param_3,param_2,param_4,uVar6);
      if ((local_58 & 1) == 0) {
        uStack_88 = CONCAT71(uStack_4f,cStack_50);
        local_90 = CONCAT71(uStack_57,local_58);
        local_80 = (void *)CONCAT44(uStack_44,local_48);
      }
      else {
        uVar4 = CONCAT71(uStack_4f,cStack_50);
        pvVar2 = (void *)CONCAT44(uStack_44,local_48);
        if (uVar4 < 0x17) {
          pvVar7 = (void *)((ulong)&local_90 | 1);
          local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar4 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar9 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
          local_90 = uVar9 | 1;
          uStack_88 = uVar4;
          local_80 = pvVar7;
        }
        memcpy(pvVar7,pvVar2,uVar4 + 1);
      }
                    /* try { // try from 0050f150 to 0050f15f has its CatchHandler @ 0050f1b0 */
      uVar4 = FUN_005104ac(param_1,uVar6,&local_90);
      if ((local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
    }
    if ((uVar4 & 1) != 0) {
      *(int *)((long)param_1 + 0xec) = *(int *)((long)param_1 + 0xec) + 1;
      param_1[2] = lVar8;
      uVar6 = 1;
      goto joined_r0x0050f0e8;
    }
  }
  uVar6 = 0;
joined_r0x0050f0e8:
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT44(uStack_44,local_48));
  }
  return uVar6;
}


