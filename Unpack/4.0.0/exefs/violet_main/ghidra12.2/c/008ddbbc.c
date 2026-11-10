/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ddbbc; name: FUN_008ddbbc
 */


void FUN_008ddbbc(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_047d1f00;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_0271ab74(*(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x20) +
                                 *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar2) +
                      0x68),param_2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x40;
      } while (lVar3 < *(int *)(param_1 + 0x28));
    }
    (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x20));
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


