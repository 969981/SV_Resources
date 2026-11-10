/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012464b0; name: FUN_012464b0
 */


undefined8 FUN_012464b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_8 [4];
  byte local_4 [4];
  
  if (((uint)param_2 & 0xff) != 10) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    FUN_01253868(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x290),param_2,local_4,local_8);
    uVar3 = (ulong)local_4[0];
    if (((uVar3 != 5) && (local_8[0] < *(byte *)(lVar4 + uVar3 * 0x38 + 0x58))) &&
       (plVar1 = *(long **)(lVar4 + uVar3 * 0x38 + (ulong)local_8[0] * 8 + 0x28),
       plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0124652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x98))();
      return uVar2;
    }
  }
  return 0;
}


