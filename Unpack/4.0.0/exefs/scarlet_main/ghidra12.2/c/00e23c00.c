/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e23c00; name: __put_character_sequence<char,std::char_traits<char>>
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::__put_character_sequence<char, std::char_traits<char> >(std::ostream&, char
   const*, unsigned long) */

ostream * std::__put_character_sequence<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,ulong param_3)

{
  ostream *poVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  sentry local_40 [16];
  
  std::ostream::sentry::sentry(local_40,param_1);
  if (local_40[0] != (sentry)0x0) {
    poVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar4 = *(undefined8 *)(poVar1 + 0x28);
    pcVar2 = param_2 + param_3;
    if ((*(uint *)(poVar1 + 8) & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
    if (*(int *)(poVar1 + 0x90) == -1) {
      uVar3 = FUN_00fba3d4(poVar1,0x20);
      *(uint *)(poVar1 + 0x90) = uVar3 & 0xff;
    }
    lVar5 = FUN_00e23cf0(uVar4,param_2,pcVar2,param_2 + param_3);
    if (lVar5 == 0) {
      std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::ostream::sentry::~sentry(local_40);
  return param_1;
}


