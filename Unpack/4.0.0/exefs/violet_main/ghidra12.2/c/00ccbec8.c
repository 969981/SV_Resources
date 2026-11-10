/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccbec8; name: FUN_00ccbec8
 */


void FUN_00ccbec8(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  int local_70;
  int local_6c;
  int local_68;
  ulong local_60;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  pcVar5 = (char *)(param_1 + 0xc0);
  pcVar5[0] = '\x01';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  local_50 = local_50 & 0xffffffffffffff00;
  local_40 = local_40 & 0xffffffffffffff00;
  puVar1 = (ulong *)FUN_00ccc070(*(undefined8 *)(param_1 + 0xb0),0);
  local_50 = *puVar1;
  uStack_48 = puVar1[1];
  puVar2 = (undefined8 *)FUN_00ccc070(*(undefined8 *)(param_1 + 0xb0),1);
  local_40 = *puVar2;
  uStack_38 = puVar2[1];
  FUN_00ccc4e8(*(undefined8 *)(param_1 + 0x30),pcVar5,&local_50,2);
  auVar6 = FUN_00ccc09c(*(undefined8 *)(param_1 + 0x30),0);
  *(undefined1 (*) [16])(param_1 + 0xd8) = auVar6;
  lVar3 = *(long *)(param_1 + 0x30);
  iVar4 = 0;
  if ((*pcVar5 != '\0') && ((auVar6._0_8_ & 0xff) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x6030) + (ulong)*(uint *)(param_1 + 0xc4) * 0x20);
    (**(code **)PTR_DAT_047e0bd0)(lVar3,auVar6._8_8_,&local_70);
    *(int *)(lVar3 + 0x180) = local_70;
    lVar3 = *(long *)(param_1 + 0x30);
    iVar4 = local_70;
  }
  *(int *)(param_1 + 0x108) = iVar4;
  auVar6 = FUN_00ccc09c(lVar3,0);
  *(undefined1 (*) [16])(param_1 + 0xe8) = auVar6;
  FUN_00ccc08c(*(undefined8 *)(param_1 + 0x30),(undefined1 (*) [16])(param_1 + 0xe8),1,0);
  FUN_00ccc080(&local_70,*(undefined8 *)(param_1 + 0x30));
  if (0 < *(int *)(param_2 + 0x5c)) {
    local_70 = *(int *)(param_2 + 0x5c);
  }
  if (0 < *(int *)(param_2 + 0x60)) {
    local_6c = *(int *)(param_2 + 0x60);
  }
  if (0 < *(int *)(param_2 + 100)) {
    local_68 = *(int *)(param_2 + 100);
  }
  if (0 < (int)*(uint *)(param_2 + 0x68)) {
    local_60 = (ulong)*(uint *)(param_2 + 0x68);
  }
  auVar6 = FUN_00ccc17c(*(undefined8 *)(param_1 + 0x30),&local_70);
  *(undefined1 (*) [16])(param_1 + 200) = auVar6;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    (**(code **)PTR_DAT_047e0bd8)
              (*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x30) + 0x6030) +
                (ulong)*(uint *)(param_1 + 0xc4) * 0x20),*(int *)(param_2 + 0x58) + 1);
  }
  return;
}


