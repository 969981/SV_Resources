/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c927e4; name: FUN_01c927e4
 */


void FUN_01c927e4(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0126a9c0();
  *param_1 = uVar3;
  memset(param_1 + 1,0,0xc2f);
  uVar1 = FUN_0168d1c0();
  *(undefined1 *)((long)param_1 + 0xc37) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc3c) = 1;
  *(undefined4 *)(param_1 + 0x187) = 0;
  *(undefined1 *)(param_1 + 0x3ff) = 0;
  memset(param_1 + 0x188,0,0x13a9);
  if (*param_2 == 0) {
    return;
  }
  uVar3 = FUN_0196c644();
  uVar2 = FUN_0196c63c(*param_2);
  FUN_01e74ef0((long)param_1 + 0xc25,0x11,uVar3,uVar2);
  return;
}


