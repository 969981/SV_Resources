/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00887520; name: FUN_00887520
 */


void FUN_00887520(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = (**(code **)(*param_2 + 0xb8))();
  if (iVar2 == 3) {
    puVar3 = PTR_LAB_047d1f70;
  }
  else {
    puVar1 = (undefined *)0x0;
    if (iVar2 == 1) {
      puVar1 = PTR_LAB_047d1f68;
    }
    puVar3 = PTR_LAB_047d1f60;
    if (iVar2 != 2) {
      puVar3 = puVar1;
    }
  }
  *param_1 = 0;
  param_1[1] = puVar3;
  param_1[2] = 0;
  return;
}


