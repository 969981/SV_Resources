/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084c344; name: FUN_0084c344
 */


uint FUN_0084c344(long param_1,undefined8 param_2,undefined4 *param_3,undefined2 *param_4,
                 int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined2 local_78 [2];
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  plVar3 = (long *)**(undefined8 **)(param_1 + 0xf0);
  uVar1 = FUN_02ee122c(*(undefined8 *)(param_1 + 0x10),*(uint *)(param_1 + 0x60) | param_5 << 1);
  uVar2 = 1;
  (**(code **)(*plVar3 + 0x40))
            (plVar3,uVar1,1,**(undefined8 **)(param_1 + 0x18),(*(undefined8 **)(param_1 + 0x18))[1],
             *(undefined8 *)(param_1 + 0x10),*param_3,param_2,param_4);
  if (*(long *)(*(long *)(param_1 + 0xf0) + 8) != 0) {
    local_78[0] = *param_4;
    local_74 = *(undefined8 *)(param_4 + 2);
    local_6c = *(undefined4 *)(param_4 + 6);
    local_68 = **(undefined8 **)(param_1 + 0x18);
    local_60 = (*(undefined8 **)(param_1 + 0x18))[1];
    local_58 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *param_3;
    plVar3 = *(long **)(*(long *)(param_1 + 0xf0) + 8);
    local_48 = param_2;
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,1,1,param_1 + 0x28,local_78);
  }
  return uVar2 & 1;
}


