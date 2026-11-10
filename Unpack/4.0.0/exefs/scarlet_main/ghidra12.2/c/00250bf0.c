/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00250bf0; name: FUN_00250bf0
 */


void FUN_00250bf0(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined5 uStack_8d;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long *local_58;
  byte *local_50;
  byte *local_48;
  long local_40;
  long *plStack_38;
  
  plVar1 = (long *)FUN_01cf7e20();
  local_58 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00250dec to 00250df3 has its CatchHandler @ 00250df4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_00250c88;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    local_70 = uVar5 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00250c88:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_78 = (long *)FUN_01cf7e20();
  local_90 = 2;
  uStack_8f = 0x2f;
  uStack_8e = 0;
  FUN_0024fdc0(&local_50,&local_70,&local_90,2);
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))
              (local_78,local_80,
               CONCAT53(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,local_90))) &
               0xfffffffffffffffe,1);
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((ulong)((long)local_48 - (long)local_50 >> 5) < 2) {
    uVar2 = FUN_01cf7e20();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar2;
    uVar7 = *(undefined8 *)local_50;
    uVar6 = *(undefined8 *)(local_50 + 0x18);
    uVar2 = *(undefined8 *)(local_50 + 0x10);
    param_1[5] = *(undefined8 *)(local_50 + 8);
    param_1[4] = uVar7;
    param_1[7] = uVar6;
    param_1[6] = uVar2;
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    local_50[0x10] = 0;
    local_50[0x11] = 0;
    local_50[0x12] = 0;
    local_50[0x13] = 0;
    local_50[0x14] = 0;
    local_50[0x15] = 0;
    local_50[0x16] = 0;
    local_50[0x17] = 0;
    pbVar3 = local_50;
  }
  else {
    uVar2 = *(undefined8 *)local_50;
    uVar7 = *(undefined8 *)(local_50 + 0x18);
    uVar6 = *(undefined8 *)(local_50 + 0x10);
    param_1[1] = *(undefined8 *)(local_50 + 8);
    *param_1 = uVar2;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    local_50[0x10] = 0;
    local_50[0x11] = 0;
    local_50[0x12] = 0;
    local_50[0x13] = 0;
    local_50[0x14] = 0;
    local_50[0x15] = 0;
    local_50[0x16] = 0;
    local_50[0x17] = 0;
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    uVar2 = *(undefined8 *)(local_50 + 0x20);
    uVar7 = *(undefined8 *)(local_50 + 0x38);
    uVar6 = *(undefined8 *)(local_50 + 0x30);
    param_1[5] = *(undefined8 *)(local_50 + 0x28);
    param_1[4] = uVar2;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    local_50[0x20] = 0;
    local_50[0x21] = 0;
    local_50[0x22] = 0;
    local_50[0x23] = 0;
    local_50[0x24] = 0;
    local_50[0x25] = 0;
    local_50[0x26] = 0;
    local_50[0x27] = 0;
    local_50[0x28] = 0;
    local_50[0x29] = 0;
    local_50[0x2a] = 0;
    local_50[0x2b] = 0;
    local_50[0x2c] = 0;
    local_50[0x2d] = 0;
    local_50[0x2e] = 0;
    local_50[0x2f] = 0;
    local_50[0x30] = 0;
    local_50[0x31] = 0;
    local_50[0x32] = 0;
    local_50[0x33] = 0;
    local_50[0x34] = 0;
    local_50[0x35] = 0;
    local_50[0x36] = 0;
    local_50[0x37] = 0;
    pbVar3 = local_50;
  }
  if (pbVar3 != (byte *)0x0) {
    if (local_48 != pbVar3) {
      local_50 = pbVar3;
      do {
        pbVar4 = local_48 + -0x20;
        if ((*pbVar4 & 1) != 0) {
          (**(code **)(**(long **)(local_48 + -8) + 0x18))
                    (*(long **)(local_48 + -8),*(undefined8 *)(local_48 + -0x10),
                     *(ulong *)(local_48 + -0x20) & 0xfffffffffffffffe,1);
        }
        local_48 = pbVar4;
      } while (pbVar3 != pbVar4);
      pbVar3 = local_50;
    }
    (**(code **)(*plStack_38 + 0x18))(plStack_38,pbVar3,local_40 - (long)pbVar3,8);
  }
  return;
}


