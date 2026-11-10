/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bfee0; name: FUN_002bfee0
 */


void FUN_002bfee0(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *puStack_68;
  
  puVar4 = PTR_FUN_047cc7b0;
  puVar3 = PTR_FUN_047cc5f8;
  puVar2 = PTR_LAB_047cba48;
  puVar1 = PTR_FUN_047cba38;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = &local_a8;
  local_98 = &local_90;
  if (param_2 != param_3) {
    do {
      puStack_c0 = puVar3;
                    /* try { // try from 002bff78 to 002bff8f has its CatchHandler @ 002c019c */
      local_c8 = param_2;
      FUN_00391b20(&local_80,&DAT_03bf359a,2,&local_c8,1);
      plVar5 = (long *)FUN_002a4d2c(&local_98,&local_c8,&local_80);
      if (*plVar5 == 0) {
        puVar6 = (undefined8 *)FUN_0049e770(puVar1,0x38);
        puVar6[6] = local_70;
        puVar6[5] = puStack_78;
        puVar6[4] = local_80;
        puStack_78 = (undefined *)0x0;
        local_70 = 0;
        local_80 = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = local_c8;
        *plVar5 = (long)puVar6;
        if ((undefined8 *)*local_98 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*plVar5;
          local_98 = (undefined8 *)*local_98;
        }
        FUN_010108e0(local_90,puVar6);
        local_88 = local_88 + 1;
      }
      if ((local_80 & 1) != 0) {
        FUN_0049e790(puVar2,local_70);
      }
      puStack_78 = puVar3;
      local_70 = (ulong)*(uint *)(param_2 + 0x18);
      puStack_68 = puVar4;
                    /* try { // try from 002bffc8 to 002bffdf has its CatchHandler @ 002c0198 */
      local_80 = param_2;
      FUN_00391b20(&local_c8,"%s_%d",5,&local_80,2);
      plVar5 = (long *)FUN_002a4d2c(&local_b0,&local_80,&local_c8);
      if (*plVar5 == 0) {
        puVar6 = (undefined8 *)FUN_0049e770(puVar1,0x38);
        puVar6[6] = local_b8;
        puVar6[5] = puStack_c0;
        puVar6[4] = local_c8;
        puStack_c0 = (undefined *)0x0;
        local_b8 = 0;
        local_c8 = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = local_80;
        *plVar5 = (long)puVar6;
        if ((undefined8 *)*local_b0 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*plVar5;
          local_b0 = (undefined8 *)*local_b0;
        }
        FUN_010108e0(local_a8,puVar6);
        local_a0 = local_a0 + 1;
      }
      if ((local_c8 & 1) != 0) {
        FUN_0049e790(puVar2,local_b8);
      }
      param_2 = param_2 + 0x20;
    } while (param_2 != param_3);
  }
                    /* try { // try from 002c0108 to 002c011f has its CatchHandler @ 002c0194 */
  FUN_002c1dc0(param_1,local_98,&local_90,&DAT_03becf73,1);
                    /* try { // try from 002c0128 to 002c013b has its CatchHandler @ 002c0174 */
  FUN_002c1dc0(param_1 + 0x18,local_b0,&local_a8,&DAT_03becf73,1);
  FUN_002a515c(&local_b0,local_a8);
  FUN_002a515c(&local_98,local_90);
  return;
}


