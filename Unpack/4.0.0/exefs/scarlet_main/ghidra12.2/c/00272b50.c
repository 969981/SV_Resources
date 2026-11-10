/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00272b50; name: FUN_00272b50
 */


void FUN_00272b50(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  ushort local_78 [8];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  puVar2 = PTR_DAT_047cbe70;
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    local_78[0] = 0;
                    /* try { // try from 00272c28 to 00272c3b has its CatchHandler @ 00272da0 */
    uVar4 = FUN_003424d0(0,3,"Invalid credentials.");
    puStack_88 = (undefined8 *)param_5[1];
    local_90 = (undefined8 *)*param_5;
    local_80 = param_5[2];
    param_5[2] = 0;
    *param_5 = 0;
    param_5[1] = 0;
                    /* try { // try from 00272c54 to 00272c63 has its CatchHandler @ 00272d34 */
    FUN_00272e50(param_1,local_78,uVar4,&local_90);
    puVar3 = local_90;
    puVar1 = PTR_LAB_047cba48;
    puVar6 = puStack_88;
    if (local_90 != (undefined8 *)0x0) {
      while (puVar6 != puVar3) {
        puVar6 = puVar6 + -1;
        puVar5 = (undefined8 *)*puVar6;
        *puVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          FUN_0049e790(puVar1,puVar5);
        }
      }
      puStack_88 = puVar3;
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
    if ((local_78[0] & 1) == 0) goto LAB_00272d00;
  }
  else {
    puStack_58 = (undefined8 *)param_5[1];
    local_60 = (undefined8 *)*param_5;
    local_50 = param_5[2];
    param_5[2] = 0;
    *param_5 = 0;
    param_5[1] = 0;
                    /* try { // try from 00272bbc to 00272bcf has its CatchHandler @ 00272db4 */
    (**(code **)(*param_3 + 0x20))(param_1,param_3,param_2,param_4,&local_60);
    puVar3 = local_60;
    puVar1 = PTR_LAB_047cba48;
    local_68 = local_60;
    puVar6 = puStack_58;
    if (local_60 == (undefined8 *)0x0) goto LAB_00272d00;
    while (local_60 = local_68, puVar6 != puVar3) {
      puVar6 = puVar6 + -1;
      puVar5 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(puVar1,puVar5);
        local_68 = local_60;
      }
    }
    puStack_58 = puVar3;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_68);
LAB_00272d00:
  if (*(long **)puVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00272d30 to 00272d33 has its CatchHandler @ 00272e40 */
    abort();
  }
                    /* try { // try from 00272d10 to 00272d13 has its CatchHandler @ 00272e40 */
  (**(code **)(**(long **)puVar2 + 0x18))();
  return;
}


