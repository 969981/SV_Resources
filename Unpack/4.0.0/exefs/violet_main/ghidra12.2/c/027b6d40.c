/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b6d40; name: FUN_027b6d40
 */


bool FUN_027b6d40(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  void *__s1;
  void *__s2;
  char local_50 [4];
  int local_4c;
  short local_48;
  char local_40 [4];
  int local_3c;
  short local_38;
  
  __s1 = (void *)(**(code **)(*param_1 + 0x10))();
  __s2 = (void *)(**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = memcmp(__s1,__s2,0xfc);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x18))(local_40,param_1);
    (**(code **)(*param_2 + 0x18))(local_50,param_2);
    if ((local_40[0] == '\0') || (local_50[0] == '\0')) {
      bVar1 = local_50[0] == '\0' && local_40[0] == '\0';
    }
    else if (local_3c == local_4c) {
      bVar1 = local_38 == local_48;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


