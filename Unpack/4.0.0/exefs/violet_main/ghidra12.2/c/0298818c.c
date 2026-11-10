/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298818c; name: FUN_0298818c
 */


undefined8 FUN_0298818c(undefined8 param_1,long param_2,ulong param_3,byte *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    lVar1 = (uVar3 >> 3 & 0xff) + 1;
    if (((((uint)lVar1 & 0xff) < (uint)*param_4) &&
        ((param_4[lVar1] >> (ulong)((uint)uVar3 & 7) & 1) != 0)) &&
       (uVar2 = FUN_029883a0(param_1,param_3 & 0xffffffff,uVar3 & 0xffffffff), (uVar2 & 1) != 0)) {
      uVar4 = 1;
      *(undefined1 *)(param_2 + (param_3 & 0xff) * 0x13 + uVar3) = 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x13);
  return uVar4;
}


