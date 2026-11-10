/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c4e68; name: FUN_002c4e68
 */


undefined1  [16]
FUN_002c4e68(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 *local_50;
  long *plStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_002c22e8(param_1,&local_38,param_2);
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x90);
    param_4 = (undefined8 *)*param_4;
    uVar4 = param_4[1];
    uVar2 = *param_4;
    puVar3[6] = param_4[2];
    puVar3[5] = uVar4;
    puVar3[4] = uVar2;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[7] = puVar3 + 8;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[0x11] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    local_40 = 1;
    puVar3[2] = local_38;
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar1 = puVar3;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    local_50 = puVar3;
    plStack_48 = param_1 + 1;
    FUN_010108e0(param_1[1],puVar1);
    param_1[2] = param_1[2] + 1;
    local_50 = (undefined8 *)0x0;
    FUN_002c2500(&local_50);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}


