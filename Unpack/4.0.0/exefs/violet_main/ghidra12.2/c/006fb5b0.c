/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006fb5b0; name: FUN_006fb5b0
 */


void FUN_006fb5b0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  uVar2 = *(undefined8 *)PTR_PTR_047cbcf8;
  uVar3 = *(undefined8 *)PTR_PTR_047cbd00;
  FUN_0024f2d0(&local_50);
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 006fb5fc to 006fb60b has its CatchHandler @ 006fb644 */
  FUN_006fef60(param_1,uVar2,uVar3,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return;
}


