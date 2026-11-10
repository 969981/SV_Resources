/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00398ed0; name: FUN_00398ed0
 */


undefined8 FUN_00398ed0(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  ulong local_48;
  size_t local_40;
  void *local_38;
  undefined8 local_28;
  
  pcVar2 = getenv("TZ");
  pcVar3 = ":localtime";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  pcVar2 = pcVar3 + 1;
  if (*pcVar3 != ':') {
    pcVar2 = pcVar3;
  }
  iVar1 = strcmp(pcVar2,"localtime");
  if (iVar1 == 0) {
    pcVar3 = getenv("LOCALTIME");
    pcVar2 = "/etc/localtime";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
  }
  __n = strlen(pcVar2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_00398fa8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_48 = uVar4 | 1;
    local_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,pcVar2,__n);
LAB_00398fa8:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_28 = 0;
                    /* try { // try from 00398fb0 to 00398fbb has its CatchHandler @ 00398ff0 */
  FUN_00399930(&local_48,&local_28);
  if ((local_48 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  return local_28;
}


