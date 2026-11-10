/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005eb090; name: FUN_005eb090
 */


void FUN_005eb090(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 005eb0a4 to 005eb0af has its CatchHandler @ 005eb1bc */
  FUN_005fa180(param_1,0);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 005eb0d0 to 005eb0db has its CatchHandler @ 005eb1a8 */
  FUN_005f8330(&local_40,*(undefined8 *)PTR_PTR_047cbcf8,param_2);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 005eb0f0 to 005eb0f7 has its CatchHandler @ 005eb17c */
  FUN_005eb1c0(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  FUN_00213580(&local_40);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 005eb13c to 005eb143 has its CatchHandler @ 005eb178 */
  FUN_005eb2e0(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


