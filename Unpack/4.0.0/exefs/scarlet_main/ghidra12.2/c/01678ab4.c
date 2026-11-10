/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01678ab4; name: FUN_01678ab4
 */


void FUN_01678ab4(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)((long)param_3 + 0xa7);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = FUN_01481420(param_4,uVar3);
  *(undefined1 *)(param_1 + 3) = 10;
  *(undefined1 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 0x15) = 0x7000007000007;
  *(undefined8 *)(param_1 + 0xd) = 0x70000070000;
  *(undefined8 *)(param_1 + 0x25) = 0x70000070000;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0x700000700000700;
  *(undefined1 *)(param_1 + 0x2d) = 7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (((cVar1 == '\x01') && (*(char *)((long)param_3 + 0xa6) != '\0')) &&
     ((long *)*param_3 != (long *)0x0)) {
    uVar3 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar2 = FUN_01481420(param_4,uVar3);
    *(undefined1 *)(param_1 + 3) = uVar2;
  }
  return;
}


