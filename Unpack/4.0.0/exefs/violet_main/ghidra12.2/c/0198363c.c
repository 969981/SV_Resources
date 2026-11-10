/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0198363c; name: FUN_0198363c
 */


void FUN_0198363c(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  
  if (0 < DAT_04835bec) {
    uVar5 = (ulong)DAT_04835be8;
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = DAT_04835be0 * 4;
    iVar6 = DAT_04835bec;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        puVar8 = (undefined1 *)(param_2 + 2 + (long)iVar3);
        do {
          uVar2 = (int)lVar7 + iVar4 * (int)uVar5;
          lVar7 = lVar7 + 1;
          uVar5 = (ulong)uVar2 << 2;
          *(undefined1 *)
           (*(long *)*param_1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar5)) = puVar8[-2]
          ;
          uVar5 = (ulong)(int)uVar5;
          *(undefined1 *)(*(long *)*param_1 + (uVar5 | 1)) = puVar8[-1];
          *(undefined1 *)(*(long *)*param_1 + (uVar5 | 2)) = *puVar8;
          *(undefined1 *)(*(long *)*param_1 + (uVar5 | 3)) = 0xff;
          uVar5 = (ulong)(int)DAT_04835be8;
          puVar8 = puVar8 + 4;
        } while (lVar7 < (long)uVar5);
        iVar6 = DAT_04835bec;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + iVar1;
    } while (iVar4 < iVar6);
  }
  return;
}


