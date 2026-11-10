/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105ce24; name: FUN_0105ce24
 */


void FUN_0105ce24(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined2 *local_30;
  undefined2 local_28 [4];
  
  lVar2 = *(long *)(param_2 + 0x90);
  lVar1 = *(long *)(lVar2 + 0x78);
  if (*(char *)(lVar2 + 0x70) != '\0') {
    if (lVar1 == 0) {
      lVar1 = 1;
      goto LAB_0105ce6c;
    }
    lVar1 = FUN_01091070(lVar2 + 0x58,lVar1,0);
  }
  if (lVar1 < 1) {
    lVar1 = 0;
  }
LAB_0105ce6c:
  local_28[0] = (undefined2)lVar1;
  local_30 = local_28;
  local_38 = 2;
  FUN_029901bc(param_1,*(undefined8 *)(param_2 + 8),param_2 + 0xf0,&local_30,&local_38);
  return;
}


