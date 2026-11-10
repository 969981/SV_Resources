/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008192a0; name: FUN_008192a0
 */


void FUN_008192a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  char *__s;
  int *piVar2;
  ulong uVar3;
  FILE *__stream;
  ulong local_a0 [8];
  char *local_60;
  char *local_38;
  
  local_60 = (char *)0x0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_38 = param_4;
                    /* try { // try from 00819304 to 00819327 has its CatchHandler @ 008194b8 */
  piVar2 = __errno_location();
  FUN_00819180(local_a0 + 6,
               "\n\n#\n# Fatal error in: %s, line %d\n# last system error: %u\n# Check failed: %s",
               param_1,param_2,*piVar2,param_3);
  if (*param_4 == '\f') {
    local_38 = param_4 + 1;
    local_a0[5] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
                    /* try { // try from 0081934c to 008193b3 has its CatchHandler @ 00819460 */
    uVar3 = FUN_00818df0(local_a0 + 9,&local_38,local_a0 + 3);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_00818df0(local_a0 + 9,&local_38,local_a0), (uVar3 & 1) != 0)) {
      uVar3 = (ulong)(local_a0 + 3) | 1;
      if ((local_a0[3] & 1) != 0) {
        uVar3 = local_a0[5];
      }
      uVar1 = (ulong)local_a0 | 1;
      if ((local_a0[0] & 1) != 0) {
        uVar1 = local_a0[2];
      }
      FUN_00819180(local_a0 + 6," (%s vs. %s)\n# ",uVar3,uVar1);
    }
    if ((local_a0[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0[2]);
    }
    if ((local_a0[3] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0[5]);
    }
  }
  else {
                    /* try { // try from 008193e8 to 008193fb has its CatchHandler @ 008194b8 */
    FUN_0021d540(local_a0 + 6,&DAT_03c76a8f,3);
  }
  do {
                    /* try { // try from 008193fc to 0081940b has its CatchHandler @ 008194bc */
    uVar3 = FUN_00818df0(local_a0 + 9,&local_38,local_a0 + 6);
  } while ((uVar3 & 1) != 0);
  __s = (char *)((ulong)(local_a0 + 6) | 1);
  if ((local_a0[6] & 1) != 0) {
    __s = local_60;
  }
  fflush(*(FILE **)PTR_stdout_047cb860);
  __stream = *(FILE **)PTR_stderr_047cb8b8;
  fputs(__s,__stream);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00819458 to 0081945b has its CatchHandler @ 0081945c */
  abort();
}


