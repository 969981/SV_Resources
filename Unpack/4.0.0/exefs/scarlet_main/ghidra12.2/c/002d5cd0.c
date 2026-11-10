/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d5cd0; name: FUN_002d5cd0
 */


long FUN_002d5cd0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_140 [8];
  ostream aoStack_138 [264];
  
  if ((char)param_1[3] == '\0') {
    lVar2 = *param_1;
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar2 + 0x10));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 002d5d10 to 002d5d13 has its CatchHandler @ 002d5d94 */
    lVar3 = FUN_002d4be8(*param_1,param_1[1],(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14));
    if (lVar3 == 0) {
                    /* try { // try from 002d5d1c to 002d5d33 has its CatchHandler @ 002d5d8c */
      FUN_002cc810(auStack_140,"external/com_github_google_re2/re2/dfa.cc",0x4e4);
                    /* try { // try from 002d5d38 to 002d5d47 has its CatchHandler @ 002d5d7c */
      std::__put_character_sequence<char,std::char_traits<char>>
                (aoStack_138,"StateSaver failed to restore state.",0x23);
      FUN_002cc97c(auStack_140);
    }
                    /* try { // try from 002d5d50 to 002d5d57 has its CatchHandler @ 002d5d90 */
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar2 + 0x10));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d5d78 to 002d5d7b has its CatchHandler @ 002d5d90 */
      abort();
    }
  }
  else {
    lVar3 = param_1[4];
  }
  return lVar3;
}


