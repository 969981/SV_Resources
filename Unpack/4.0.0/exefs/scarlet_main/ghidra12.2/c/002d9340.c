/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d9340; name: FUN_002d9340
 */


undefined8
FUN_002d9340(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
            long *param_6,int param_7)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_130 [2];
  undefined1 auStack_120 [208];
  
  FUN_002d8014(auStack_120,param_1);
  plVar1 = local_130;
  if (param_7 != 0) {
    plVar1 = param_6;
  }
  local_130[0] = 0;
  local_130[1] = 0;
  bVar3 = param_5 == 2;
  plVar2 = plVar1;
  if (!bVar3) {
    plVar2 = param_6;
  }
  if (bVar3 && param_7 == 0) {
    param_7 = 1;
  }
                    /* try { // try from 002d93b8 to 002d93c7 has its CatchHandler @ 002d9420 */
  uVar4 = FUN_002d8df0(auStack_120,param_2,param_3,param_4 == 1 || bVar3,param_5 != 0,plVar2,param_7
                      );
  if (((uVar4 & 1) == 0) || ((param_5 == 2 && (*plVar1 + plVar1[1] != *param_2 + param_2[1])))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_002d8408(auStack_120);
  return uVar5;
}


