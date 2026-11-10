/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d040; name: FUN_0052d040
 */


undefined8 FUN_0052d040(long param_1,long *param_2,int *param_3)

{
  byte bVar1;
  ulong *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar2 = *(ulong **)(param_1 + 8);
  bVar1 = (byte)*puVar2;
  if ((bVar1 & 1) == 0) {
    uVar7 = (ulong)(bVar1 >> 1);
    uVar8 = uVar7;
    if (bVar1 < 0x2c) {
      uVar6 = 0x16;
    }
    else {
      uVar5 = bVar1 & 0xfe;
      if (uVar5 < 0x11) {
        uVar5 = 0x10;
      }
      uVar6 = (ulong)uVar5;
      if (uVar6 <= uVar7) {
        *(undefined1 *)((long)puVar2 + uVar6 + 1) = 0;
        *(char *)puVar2 = (char)(uVar5 << 1);
        pbVar4 = *(byte **)(param_1 + 8);
        bVar1 = *pbVar4;
        goto joined_r0x0052d11c;
      }
    }
  }
  else {
    uVar7 = puVar2[1];
    iVar3 = (int)uVar7;
    uVar8 = (ulong)iVar3;
    uVar6 = (*puVar2 & 0xfffffffffffffffe) - 1;
    if (uVar6 <= uVar8) {
      if (0x3fffffff < iVar3) {
        return 0;
      }
      uVar5 = iVar3 * 2;
      if ((int)uVar5 < 0x11) {
        uVar5 = 0x10;
      }
      uVar6 = (ulong)uVar5;
    }
    if (uVar6 <= uVar7) {
      *(undefined1 *)(puVar2[2] + uVar6) = 0;
      puVar2[1] = uVar6;
      pbVar4 = *(byte **)(param_1 + 8);
      bVar1 = *pbVar4;
      goto joined_r0x0052d11c;
    }
  }
  FUN_002ce498(puVar2,uVar6 - uVar7,0);
  pbVar4 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar4;
joined_r0x0052d11c:
  if ((bVar1 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
  }
  else {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  *param_2 = (long)(pbVar4 + uVar8);
  bVar1 = **(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    uVar5 = (uint)(bVar1 >> 1);
  }
  else {
    uVar5 = (uint)*(undefined8 *)(*(byte **)(param_1 + 8) + 8);
  }
  *param_3 = uVar5 - (int)uVar8;
  return 1;
}


