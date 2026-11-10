/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01571ef8; name: FUN_01571ef8
 */


void FUN_01571ef8(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(int *)((long)param_2 + 0xc) == 5) {
    bVar1 = *(byte *)(param_2 + 1);
    puVar5 = (ulong *)*param_2;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)(byte)*puVar5;
      }
      else {
        uVar3 = (ulong)(ushort)*puVar5;
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)(uint)*puVar5;
    }
    else {
      uVar3 = *puVar5;
    }
    bVar1 = *(byte *)((long)param_2 + 9);
    lVar4 = (long)puVar5 - uVar3;
    *param_1 = lVar4;
    lVar6 = -(ulong)bVar1;
    *(byte *)(param_1 + 1) = bVar1;
    if ((ulong)bVar1 < 4) {
      if (bVar1 < 2) {
        uVar3 = (ulong)*(byte *)(lVar4 + lVar6);
      }
      else {
        uVar3 = (ulong)*(ushort *)(lVar4 + lVar6);
      }
    }
    else if (bVar1 < 8) {
      uVar3 = (ulong)*(uint *)(lVar4 + lVar6);
    }
    else {
      uVar3 = *(ulong *)(lVar4 + lVar6);
    }
  }
  else if (*(int *)((long)param_2 + 0xc) == 4) {
    bVar1 = *(byte *)(param_2 + 1);
    puVar5 = (ulong *)*param_2;
    if (bVar1 < 4) {
      if (bVar1 < 2) {
        uVar7 = (ulong)(byte)*puVar5;
      }
      else {
        uVar7 = (ulong)(ushort)*puVar5;
      }
    }
    else if (bVar1 < 8) {
      uVar7 = (ulong)(uint)*puVar5;
    }
    else {
      uVar7 = *puVar5;
    }
    uVar2 = *(undefined1 *)((long)param_2 + 9);
    uVar3 = strlen((char *)((long)puVar5 - uVar7));
    *param_1 = (long)((long)puVar5 - uVar7);
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  else {
    *param_1 = (long)PTR_DAT_045e7f30;
    uVar3 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  param_1[2] = uVar3;
  return;
}


