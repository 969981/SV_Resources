/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0e180; name: FUN_02f0e180
 */


undefined8 FUN_02f0e180(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [16];
  short *local_50;
  undefined4 local_44;
  
  puVar5 = PTR_DAT_047e4050;
  bVar2 = *(byte *)(param_1 + 0x20);
  lVar8 = param_1;
  if (bVar2 - 0x13 < 2) {
    do {
      plVar6 = (long *)(lVar8 + 0x28);
      lVar7 = *plVar6;
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar7 + (long)plVar6;
      }
      bVar2 = *(byte *)(lVar8 + 0x20);
    } while (bVar2 - 0x13 < 2);
  }
  local_44 = 0;
  (**(code **)(*(long *)PTR_DAT_047e4050 + (ulong)bVar2 * 0x80 + 0x18))(lVar8,auStack_60);
  puVar4 = PTR_DAT_047d19b0;
  if (*local_50 == 3) {
    psVar9 = local_50 + 8;
  }
  else if (*local_50 == 2) {
    psVar9 = local_50 + 0x20;
  }
  else {
    psVar9 = (short *)(PTR_DAT_047d19b0 + 0x50);
  }
  bVar2 = *(byte *)(param_1 + 0x20);
  while (bVar2 - 0x13 < 2) {
    plVar6 = (long *)(param_1 + 0x28);
    lVar8 = *plVar6;
    param_1 = 0;
    if (lVar8 != 0) {
      param_1 = lVar8 + (long)plVar6;
    }
    bVar2 = *(byte *)(param_1 + 0x20);
  }
  local_44 = 0;
  (**(code **)(*(long *)puVar5 + (ulong)bVar2 * 0x80 + 0x18))(param_1,auStack_60);
  sVar3 = *local_50;
  uVar10 = *(undefined8 *)psVar9;
  param_2[1] = *(undefined8 *)(psVar9 + 4);
  *param_2 = uVar10;
  psVar9 = (short *)(puVar4 + 0x50);
  if (sVar3 == 2) {
    psVar9 = local_50 + 0x40;
  }
  psVar1 = local_50 + 0x10;
  if (sVar3 != 3) {
    psVar1 = psVar9;
  }
  uVar10 = *(undefined8 *)psVar1;
  param_3[1] = *(undefined8 *)(psVar1 + 4);
  *param_3 = uVar10;
  return 0;
}


