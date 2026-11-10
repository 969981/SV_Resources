/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02287318; name: FUN_02287318
 */


void FUN_02287318(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((((1 < *param_3) ||
       (puVar4 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = PTR_DAT_047d3ba0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  FUN_0228abe8(param_2,uVar1,uVar2,puVar4);
  return;
}


