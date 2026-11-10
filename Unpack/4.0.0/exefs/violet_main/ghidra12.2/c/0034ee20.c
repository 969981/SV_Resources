/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ee20; name: FUN_0034ee20
 */


void FUN_0034ee20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte local_98 [16];
  ulong local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  if ((DAT_047ef5a8 == (code *)0x0) ||
     (iVar4 = (*DAT_047ef5a8)(param_4,param_5,param_6,param_7), iVar4 == 0)) {
    local_80 = *param_4;
    puStack_78 = PTR_LAB_047cc7b8;
    local_70 = param_4[3];
    puStack_68 = PTR_LAB_047cc7b8;
    FUN_00391b20(local_98,"HTTP:GET:%s:%s",0xe,&local_80,2);
    uVar3 = local_88;
    bVar2 = local_98[0];
                    /* try { // try from 0034eebc to 0034eefb has its CatchHandler @ 0034ef34 */
    FUN_0034df90(&local_80,param_4);
    uVar1 = (ulong)local_98 | 1;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar3;
    }
    FUN_0034ef60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1,&local_80);
    if ((local_98[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
  }
  return;
}


