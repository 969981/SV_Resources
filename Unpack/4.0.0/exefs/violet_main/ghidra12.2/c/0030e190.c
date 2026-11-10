/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030e190; name: FUN_0030e190
 */


undefined8 FUN_0030e190(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_68;
  undefined *puStack_60;
  ulong local_58;
  ulong local_50 [4];
  ulong local_30;
  undefined *puStack_28;
  ulong local_20;
  undefined *puStack_18;
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  if (param_1 == param_2) {
    puStack_60 = PTR_FUN_047cc7c0;
                    /* try { // try from 0030e1b4 to 0030e1cf has its CatchHandler @ 0030e294 */
    local_68 = param_1;
    FUN_00391b20(&local_30,&DAT_03be62d5,3,&local_68,1);
    if ((local_50[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50[2]);
    }
    local_50[2] = local_20;
    local_50[0] = local_30;
  }
  else {
    puStack_28 = PTR_FUN_047cc7c0;
    puStack_18 = PTR_FUN_047cc7c0;
                    /* try { // try from 0030e1fc to 0030e217 has its CatchHandler @ 0030e290 */
    local_30 = param_1;
    local_20 = param_2;
    FUN_00391b20(&local_68,"%ld -> %ld",10,&local_30,2);
    if ((local_50[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50[2]);
    }
    local_50[2] = local_58;
    local_50[0] = local_68;
  }
  uVar1 = (ulong)local_50 | 1;
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_50[2];
  }
                    /* try { // try from 0030e258 to 0030e263 has its CatchHandler @ 0030e298 */
  uVar2 = FUN_0038d3c0(uVar1,0x20,0x1e);
  if ((local_50[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50[2]);
  }
  return uVar2;
}


