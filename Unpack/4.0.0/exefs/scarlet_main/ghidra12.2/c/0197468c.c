/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197468c; name: FUN_0197468c
 */


void FUN_0197468c(long param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  
  *param_2 = 0;
  if (*(char *)(param_3 + 1) == '\0') {
    if (*(char *)((long)param_3 + 7) == '\0') {
      cVar2 = FUN_01974854(param_1,0,*(undefined1 *)((long)param_3 + 5));
      if (cVar2 == '\0') {
        FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,
                     *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x19));
        FUN_02983060(*(undefined8 *)(param_1 + 0x20));
        FUN_0124beb0(*(undefined8 *)(param_1 + 0x20),0);
        FUN_0298308c(param_1);
        FUN_029830bc(param_1);
        return;
      }
      memcpy(auStack_58,param_3 + 0xb,0x24);
      FUN_0298311c(param_1,*param_3,*(undefined1 *)(param_3 + 0x14),auStack_58);
      return;
    }
    FUN_02982fc4(param_1,*param_3,*(undefined1 *)(param_3 + 0x14),param_3 + 2);
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_01974794(param_1,param_3);
    bVar1 = bVar1 & 1;
  }
  *param_2 = bVar1;
  return;
}


