/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278549c; name: FUN_0278549c
 */


undefined8
FUN_0278549c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = FUN_02785560(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8)), lVar1 == 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_027855e8(*(undefined8 *)(lVar1 + 0x18),param_4,param_5);
    FUN_02785618(auStack_28,param_2);
    local_60 = 0;
    uStack_58 = 0;
    FUN_00c43ef0(&local_60,param_3);
    local_50 = *(undefined8 *)(param_3 + 0x10);
    local_48 = *(undefined1 *)(param_3 + 0x18);
    FUN_027856a8(lVar1,auStack_28,&local_60);
    FUN_0278570c(&local_60);
    FUN_02782500(auStack_28);
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}


