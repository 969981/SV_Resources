# Tests

Synthetic fixtures and executable tests belong here. Do not commit ROM-derived binary fixtures without appropriate rights.

`Test-Transfer-Synthetic.ps1` (installed with the task package) creates a temporary source, temporary repository and LOCAL bare origin; it must never push to the real GitHub repository.

Run from repository root:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\tests\Test-Transfer-Synthetic.ps1
```

Always report whether the test was actually executed; a packaged script is not evidence of a passing Windows run.

## SV Unpack planning tests

`test_plan_sv_unpack.py` creates a tiny synthetic ExeFS/manifest tree, runs the task planner, verifies original filename-based output directories and confirms the original bytes are untouched.

```powershell
python -m unittest discover -s tests -p test_plan_sv_unpack.py -v
```

The [sparse-checkout CI](../.github/workflows/validate-unpack-plan.yml) runs only these Python synthetic tests, not the many-gigabyte source archive or proprietary binary dependencies.
