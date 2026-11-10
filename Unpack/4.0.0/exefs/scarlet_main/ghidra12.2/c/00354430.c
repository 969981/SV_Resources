/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00354430; name: thunk_FUN_003619c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_003619c0(void)

{
  FUN_0038db00(&DAT_047ef840);
  FUN_0038db80(&DAT_047ef80c);
  FUN_0038db80(&DAT_047ef814);
  _DAT_047ef800 = 0;
  _DAT_047ef804 = 0;
  DAT_047ef820 = 0;
  DAT_047ef828 = 0x7fffffffffffffff;
  FUN_0038db40(&DAT_047ef840);
  if ((_DAT_047ef800 & 1) == 0) {
    _DAT_047ef800 = CONCAT11(DAT_047ef801,1);
    FUN_00361c60();
    return;
  }
  FUN_0038db60(&DAT_047ef840);
  return;
}


