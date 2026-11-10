/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002deb98; name: FUN_002deb98
 */


undefined8 FUN_002deb98(uint *param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  
  pbVar5 = *(byte **)(param_1 + 8);
  if (pbVar5 != (byte *)0x0) {
    bVar2 = *pbVar5;
    if (bVar2 < 0x16) {
      uVar1 = *param_1 ^ 0x40;
      if ((param_4 & 1) == 0) {
        uVar1 = *param_1;
      }
      if ((bVar2 == param_2) && (uVar1 == *(ushort *)(pbVar5 + 2))) {
        return 1;
      }
      if ((bVar2 - 7 < 3) && (uVar1 == *(ushort *)(pbVar5 + 2))) {
        *pbVar5 = 7;
        return 1;
      }
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (lVar3 != 0) {
        FUN_002e4418(lVar3,param_2,uVar1);
      }
      *(undefined2 *)(lVar3 + 6) = 1;
      pcVar9 = *(char **)(param_1 + 8);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(pcVar9 + 0x10);
      if (((pcVar9 == (char *)0x0) ||
          (pcVar9[0x10] = '\0', pcVar9[0x11] = '\0', pcVar9[0x12] = '\0', pcVar9[0x13] = '\0',
          pcVar9[0x14] = '\0', pcVar9[0x15] = '\0', pcVar9[0x16] = '\0', pcVar9[0x17] = '\0',
          *pcVar9 != '\x14')) || (lVar8 = *(long *)(pcVar9 + 0x20), lVar8 == 0)) {
        plVar7 = (long *)(lVar3 + 8);
      }
      else {
        pcVar9[0x20] = '\0';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = '\0';
        uVar4 = FUN_002e7144(lVar8);
        *(undefined8 *)(pcVar9 + 0x18) = uVar4;
        FUN_002e3684(lVar8 + 0x10,*(undefined8 *)(lVar8 + 0x18));
        FUN_0049e790(PTR_LAB_047cba48,lVar8);
        plVar7 = (long *)(lVar3 + 8);
        if (1 < *(ushort *)(lVar3 + 6)) {
          plVar7 = (long *)*plVar7;
        }
      }
      *plVar7 = (long)pcVar9;
      bVar2 = FUN_002e7540(lVar3);
      *(byte *)(lVar3 + 1) = bVar2 & 1;
      *(long *)(param_1 + 8) = lVar3;
      return 1;
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 6);
  *puVar6 = 8;
  uVar4 = *param_3;
  *(undefined8 *)(puVar6 + 4) = param_3[1];
  *(undefined8 *)(puVar6 + 2) = uVar4;
  return 0;
}


