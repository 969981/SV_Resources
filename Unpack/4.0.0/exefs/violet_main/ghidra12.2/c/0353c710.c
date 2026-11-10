/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353c710; name: strcoll
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcoll(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcoll_047c9c80)((int)__s1);
  return iVar1;
}


