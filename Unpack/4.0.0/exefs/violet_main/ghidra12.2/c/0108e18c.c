/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108e18c; name: FUN_0108e18c
 */


void FUN_0108e18c(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  size_t sVar4;
  byte *__src;
  char *__s;
  char acStack_40 [8];
  undefined8 local_38;
  
  bVar3 = *param_2;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  __s = acStack_40 + -(uVar2 + 0x20 & 0xfffffffffffffff0);
  local_38 = __s;
  *__s = '\0';
  sVar4 = strlen(__s);
  pcVar1 = __s + sVar4;
  pcVar1[0x10] = '\0';
  *(undefined8 *)pcVar1 = s_PokemonReaction__03c8b41f._0_8_;
  *(undefined8 *)(pcVar1 + 8) = s_PokemonReaction__03c8b41f._8_8_;
  __src = *(byte **)(param_2 + 0x10);
  if ((bVar3 & 1) == 0) {
    __src = param_2 + 1;
  }
  strcat(__s,(char *)__src);
  FUN_00cf9768(param_1,&local_38);
  return;
}


