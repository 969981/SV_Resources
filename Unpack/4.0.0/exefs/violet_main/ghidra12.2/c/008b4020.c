/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4020; name: FUN_008b4020
 */


void FUN_008b4020(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if ((uVar1 & 1) != 0) {
    FUN_008f26f4(param_1 + 0x11,param_2);
    FUN_008f28b8(param_1 + 8,param_2);
    (**(code **)PTR_DAT_047d2430)
              (param_1[3],param_1[4],param_1[5],param_1[6],*(undefined8 *)PTR_DAT_047d2428,
               *(undefined4 *)((long)param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


