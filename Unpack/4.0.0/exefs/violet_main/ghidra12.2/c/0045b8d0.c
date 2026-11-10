/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045b8d0; name: FUN_0045b8d0
 */


ulong FUN_0045b8d0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_047f19e0 != 0) {
    iVar1 = FUN_0047e430();
    if (*param_1 < iVar1) {
      puVar2 = (undefined8 *)FUN_0047e450(DAT_047f19e0);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      goto LAB_0045b918;
    }
  }
  uVar3 = FUN_00451c30(*(undefined8 *)(param_1 + 2));
LAB_0045b918:
  return uVar3 ^ (long)*param_1;
}


