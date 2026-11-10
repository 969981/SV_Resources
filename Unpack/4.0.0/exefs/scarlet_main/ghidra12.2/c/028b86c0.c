/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b86c0; name: FUN_028b86c0
 */


undefined4
FUN_028b86c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_5 + 0x30);
  *(undefined1 *)(param_5 + 0x46) = 1;
  iVar2 = *(int *)(param_5 + 0x20);
  iVar3 = *(int *)(param_5 + 0x28);
  FUN_015c8088(param_4,0,param_5,10);
  FUN_015c8088(param_3,0,param_5,8);
  FUN_015c8088(param_2,0,param_5,6);
  FUN_015c8088(param_1,0,param_5,4);
  uVar4 = FUN_01571a80(param_5,(iVar2 - iVar1) + iVar3);
  return uVar4;
}


