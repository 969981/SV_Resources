/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987eb0; name: FUN_02987eb0
 */


void FUN_02987eb0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  FUN_0123de68();
  FUN_0123de70();
  FUN_01245aa8();
  FUN_01245ab0(param_1);
  FUN_010af048();
  *param_2 = 0;
  puVar3 = (ulong *)*param_3;
  if (((char)puVar3[0x46] != '\0') && ((*puVar3 & 0xf) == 0xe)) {
    uVar1 = FUN_01243584(param_1);
    FUN_01242850(uVar1,1);
    FUN_02987f58(param_1,*puVar3 >> 4);
    uVar2 = *puVar3;
    uVar1 = FUN_01243584(param_1);
    FUN_01242850(uVar1,(uVar2 & 0xff000) != 0);
    *param_2 = 1;
  }
  return;
}


