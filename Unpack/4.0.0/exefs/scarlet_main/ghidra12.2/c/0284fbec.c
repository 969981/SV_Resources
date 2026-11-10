/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284fbec; name: FUN_0284fbec
 */


void FUN_0284fbec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_70 [16];
  long local_60;
  undefined1 auStack_58 [24];
  
  FUN_028560b0(*(undefined8 *)(param_2 + 0x68));
  FUN_028531f8(&local_60,param_2,param_3);
  lVar1 = local_60;
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x18))(auStack_70,plVar2,local_60);
  local_60 = 0;
  if (lVar1 != 0) {
    FUN_02854550(auStack_58,lVar1);
  }
  FUN_02851dd8(&local_60,param_2,param_3);
  lVar1 = local_60;
  (**(code **)(*plVar2 + 0x10))(auStack_70,plVar2,local_60);
  local_60 = 0;
  if (lVar1 != 0) {
    FUN_02852ae4(auStack_58,lVar1);
  }
  return;
}


