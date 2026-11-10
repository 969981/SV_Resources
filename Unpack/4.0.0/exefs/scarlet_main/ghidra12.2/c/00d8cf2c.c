/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8cf2c; name: FUN_00d8cf2c
 */


undefined8
FUN_00d8cf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  
  if (*(long *)(param_7 + 0x48) == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_2;
    FUN_00d100a8();
    puVar1 = (undefined8 *)
             FUN_00c516a0(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x40) + 0x30) + 0x6120),
                          *(long *)(param_7 + 0x48) + 0xf0);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d8d0ac(param_7 + 0x50,*puVar1,0,0x1f);
    }
    FUN_00d8d070(param_1,0xa0);
    FUN_00c5afc0(param_1,0,4,param_4,param_7 + 0x148);
    FUN_00d8d140(param_1,param_7 + 0x50,0x11);
    FUN_00d8d198(param_1,param_5);
    uVar2 = 1;
    FUN_00c6cfb4(param_1,1,&local_48,0);
    FUN_00c5b260(param_1,*(long *)(param_7 + 0x150) + 0x58);
    FUN_00c5b0c4(param_1,*(long *)(param_7 + 0x150) + 0x80);
    FUN_00c6d118(param_1,*(long *)(param_7 + 0x150) + 0x9c);
    FUN_00d8d098(0x3f800000,param_1);
    FUN_00d8d0f0(param_1,3,3,0);
    FUN_00d8d070(param_1,0xa0);
  }
  return uVar2;
}


