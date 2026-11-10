/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b0254; name: FUN_011b0254
 */


void FUN_011b0254(ushort *param_1,undefined8 param_2,ushort *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar9;
  ulong uVar8;
  uint uVar10;
  byte bVar11;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar8 = FUN_011b0350();
  uVar9 = (uint)(uVar8 >> 0x20);
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  uVar7 = param_3[2];
  *(char *)(param_1 + 2) = (char)uVar7;
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_3 + 5);
  *(char *)(param_1 + 3) = (char)param_3[3];
  uVar1 = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
  uVar10 = uVar9 >> 1 & 1;
  uVar4 = (ushort)(uVar8 >> 0x10);
  if ((uint)uVar2 == ((uint)uVar8 & 0xffff)) {
    if ((((uint)uVar3 == (uint)uVar8 >> 0x10) && ((uint)((char)uVar5 != '\x01') != (uVar9 & 1))) &&
       (((char)uVar6 != '\0') == uVar10)) {
      return;
    }
    *param_1 = uVar2;
    param_1[1] = uVar4;
    if ((uVar8 & 0x100000000) == 0) {
      bVar11 = ((char)uVar7 == '\x02') << 1;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    param_1[1] = uVar4;
    bVar11 = (byte)(uVar8 >> 0x20) & 1;
    *param_1 = (ushort)uVar8;
  }
  *(byte *)(param_1 + 2) = bVar11;
  *(char *)(param_1 + 3) = (char)uVar10;
  return;
}


