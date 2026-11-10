/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c990; name: FUN_0038c990
 */


void FUN_0038c990(void)

{
  char *__ptr;
  int iVar1;
  long lVar2;
  char *local_18;
  
  FUN_0038ed44(&local_18,&PTR_s_grpc_verbosity_04497230);
  if (*local_18 != '\0') {
                    /* try { // try from 0038c9b4 to 0038c9e7 has its CatchHandler @ 0038ca50 */
    iVar1 = FUN_0038d430(local_18,"DEBUG");
    if (iVar1 == 0) {
      lVar2 = 0;
      __ptr = local_18;
      goto joined_r0x0038c9f8;
    }
    iVar1 = FUN_0038d430(local_18,&DAT_03c0152f);
    if (iVar1 == 0) {
      lVar2 = 1;
      __ptr = local_18;
      goto joined_r0x0038c9f8;
    }
    FUN_0038d430(local_18,"ERROR");
  }
  lVar2 = 2;
  __ptr = local_18;
joined_r0x0038c9f8:
  if (DAT_04497220 == -1) {
    DAT_04497220 = lVar2;
  }
  local_18 = (char *)0x0;
  if (__ptr != (char *)0x0) {
                    /* try { // try from 0038ca24 to 0038ca27 has its CatchHandler @ 0038ca4c */
    free(__ptr);
  }
  return;
}


