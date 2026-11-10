/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186917c; name: FUN_0186917c
 */


void FUN_0186917c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  char local_14 [4];
  
  uVar2 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar4 = (**(code **)(*(long *)*param_3 + 0x200))();
  if (((((uVar4 & 1) == 0) &&
       (cVar1 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar2), cVar1 != '\n'
       )) && (iVar3 = FUN_0186923c(*(undefined8 *)(param_1 + 0x38),*param_3,
                                   *(undefined2 *)param_3[1],*(undefined4 *)(param_3 + 2),local_14),
             iVar3 != 0)) &&
     ((local_14[0] != '\0' || (uVar4 = FUN_02981c1c(param_1,*param_3,iVar3), (uVar4 & 1) != 0)))) {
    FUN_0186989c(param_1,*param_3,iVar3);
  }
  return;
}


