/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00128170; name: FUN_00128170
 */


undefined8 FUN_00128170(long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (0xffff < *(uint *)(param_1 + 0xb0)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x108) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"attempt to yield from outside a coroutine");
    }
                    /* WARNING: Subroutine does not return */
    FUN_00125b90(param_1,"attempt to yield across a C-call boundary");
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)(lVar1 + 0x38) = param_2;
  if ((*(byte *)(lVar1 + 0x3e) >> 1 & 1) == 0) {
    return 0;
  }
  *(long *)(lVar1 + 0x20) = param_4;
  if (param_4 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00126bd0(param_1,1);
}


