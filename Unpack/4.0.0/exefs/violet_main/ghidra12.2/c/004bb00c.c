/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bb00c; name: FUN_004bb00c
 */


void FUN_004bb00c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_004bb144(param_1,*(long *)(param_2 + 0x80) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x98;
    } while (lVar4 < *(int *)(param_2 + 0x38));
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_004bba08(param_1,*(long *)(param_2 + 0x68) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_2 + 0x2c));
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x70) + lVar3;
      if ((0 < *(int *)(lVar1 + 0x2c)) && (*(int *)(*(long *)(lVar1 + 0x30) + 0x10) != 0)) {
        FUN_004aa7f4(param_1,*(undefined8 *)(lVar1 + 8),
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x58) + lVar4 * 8 + 8) + 0x28) + 8),1
                     ,"The first enum value must be zero in proto3.");
        iVar2 = *(int *)(param_2 + 0x30);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x50;
    } while (lVar4 < iVar2);
  }
  return;
}


