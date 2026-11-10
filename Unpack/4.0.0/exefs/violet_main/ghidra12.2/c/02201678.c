/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02201678; name: FUN_02201678
 */


void FUN_02201678(float param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(float *)(param_2 + 0x334) = param_1;
  if (*(int *)(param_2 + 0x74) == 2) {
    param_1 = param_1 * 0.017453292;
    lVar1 = *(long *)(param_2 + 0xb8);
    uStack_28 = CONCAT44(param_1,param_1);
    local_30 = CONCAT44(param_1,param_1);
    uVar2 = FUN_022016d0(&local_30);
    *(undefined4 *)(lVar1 + 0x118) = uVar2;
  }
  return;
}


