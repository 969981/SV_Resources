/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c012e4; name: FUN_00c012e4
 */


byte FUN_00c012e4(long *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  uint uStack_50;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_8;
  
  local_48 = 0x7fffffff;
  uStack_40 = 0x200000004000000;
  local_38 = *(undefined4 *)PTR_DAT_047dac98;
  local_70 = (byte *)0x0;
  pbStack_68 = (byte *)0x0;
  uStack_58 = 0;
  local_52 = 0;
  uStack_50 = 0;
  cStack_4c = '\0';
  uStack_4b = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = param_2;
  uStack_34 = local_38;
  FUN_00c08eb0(&local_70);
  if (*param_1 != 0) {
    FUN_00bfee44(param_1);
  }
  local_8 = 0;
  do {
    if (local_70 < pbStack_68) {
      uVar3 = (uint)*local_70;
      if ((char)*local_70 < '\0') goto LAB_00c01374;
      local_70 = local_70 + 1;
      uStack_50 = uVar3;
      if (uVar3 != 0) goto LAB_00c01388;
LAB_00c013a8:
      if (cStack_4c != '\0') {
        FUN_00bffbb0(param_1,&local_8);
        bVar4 = 1;
        goto LAB_00c013c8;
      }
      break;
    }
    uVar3 = 0;
LAB_00c01374:
    uStack_50 = FUN_00c096d0(&local_70,uVar3);
    if (uStack_50 == 0) goto LAB_00c013a8;
LAB_00c01388:
    if ((uStack_50 & 7) == 4) goto LAB_00c013a8;
    uVar2 = FUN_00c01b50(&local_70,uStack_50,&local_8);
  } while ((uVar2 & 1) != 0);
  bVar4 = 0;
LAB_00c013c8:
  if (local_8 != 0) {
    FUN_00bfee44(&local_8);
  }
  bVar1 = cStack_4c != '\0';
  FUN_00c08dac(&local_70);
  return bVar4 & bVar1;
}


